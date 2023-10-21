import fs from 'fs';
import _ from './lodash.min.js';
import path from 'path';
import { allUi5Components, allFioriItems } from './components.mjs';

const generateHeader = (item, importBase) => {
    const kebabName = _.kebabCase(item.name);
    const components = item.components || [kebabName];
    const snakeComponents = components.map((c) => _.snakeCase(c));
    const componentZip = _.zip(components, snakeComponents);

    let imports = [];
    if (item.hasOwnProperty('imports')) {
        imports = item.imports;
    } else {
        imports = [`@ui5/${importBase}/dist/${item.name}.js`];
    }
    const importsString = imports.map((i) => `import \"${i}\";`).join('\n');
    const componentLines = componentZip.map((c) => `NUI_MAKE_HTML_ELEMENT_RENAME(${c[1]}, \"ui5-${c[0]}\")`).join('\n    ');

    const content = `#pragma once
// clang-format off

#ifdef NUI_INLINE
// @inline(js, ui5-${kebabName})
${importsString}
// @endinline
#endif

// clang-format on

namespace ui5
{
    ${componentLines}
}
`;
    item.content = content;
    return item;
}

const generateHeaders = (components, basePath, importBase, kitchenSinkInclude) => {
    const headers = components.map((c) => generateHeader(c, importBase));
    console.log(headers);
    // for each write to file sync :
    for (const header of headers) {
        //console.log(header);
        const snake = _.snakeCase(header.name);
        console.log(`Writing ${snake}.hpp`);
        fs.writeFileSync(`${basePath}/${snake}.hpp`, header.content);
    }
    // create kitchen sink include:
    const allIncludes = headers.map((h) => `#include \"${_.snakeCase(h.name)}.hpp\"`).join('\n');
    const kitchenSink = `#pragma once

${allIncludes}`;
    fs.writeFileSync(kitchenSinkInclude, kitchenSink);
}

const generateFiles = () => {
    const basePath = '../include/ui5/components';

    // make path absolute:
    const absolutePath = path.resolve(basePath);
    // check if path exists:
    if (!fs.existsSync(absolutePath)) {
        console.error(`Path ${absolutePath} does not exist!`);
        return;
    }

    const fioriDir = path.join(absolutePath, 'fiori');
    // make fiori dir
    if (!fs.existsSync(fioriDir)) {
        fs.mkdirSync(fioriDir);
    }

    // clear directory contents:
    fs.readdirSync(absolutePath).forEach((file) => {
        // if file:
        if (fs.lstatSync(`${absolutePath}/${file}`).isFile()) {
            console.log(`Deleting ${file}`);
            fs.unlinkSync(`${absolutePath}/${file}`);
        }
    });

    fs.readdirSync(fioriDir).forEach((file) => {
        // if file:
        if (fs.lstatSync(`${absolutePath}/fiori/${file}`).isFile()) {
            console.log(`Deleting ${file}`);
            fs.unlinkSync(`${absolutePath}/fiori/${file}`);
        }
    });

    generateHeaders(allUi5Components, absolutePath, 'webcomponents', path.join(absolutePath, '..', 'ui5_components.hpp'));
    generateHeaders(allFioriItems, fioriDir, 'webcomponents-fiori', path.join(absolutePath, '..', 'ui5_fiori_components.hpp'));
}

generateFiles();