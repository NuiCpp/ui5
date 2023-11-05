#pragma once

#include <nui/frontend/element_renderer.hpp>

#include <memory>

class MainPage
{
  public:
    MainPage();
    ~MainPage();
    MainPage(MainPage const&) = delete;
    MainPage(MainPage&&);
    MainPage& operator=(MainPage const&) = delete;
    MainPage& operator=(MainPage&&);

    Nui::ElementRenderer render();

  private:
    struct Implementation;
    std::unique_ptr<Implementation> impl_;
};