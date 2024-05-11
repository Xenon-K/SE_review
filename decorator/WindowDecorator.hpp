#ifndef WINDOW_DECORATOR_H
#define WINDOW_DECORATOR_H
#include "Window.hpp"

class WindowDecorator: public Window   {
  public:
  WindowDecorater(Window *window) { this->window = window; }
  void draw(){
    window->draw();
    cout << "Drawing: Window Decorator" << endl;
  }
  std::string getDescription()
  {
    window->getDescription();
    return("Description: Window Decorator\n");
  }
private:
Window* window;
};

#endif