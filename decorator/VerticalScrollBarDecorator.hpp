#ifndef VERTICALSCROLLBARDECORATOR_H
#define VERTICALSCROLLBARDECORATOR_H
#include <iostream>
#include "Window.hpp"

using namespace std;

class VerticalScrollBarDecorator:public Window {
  public:
    VerticalScrollBarDecorator(Window *window) { this->window = window; }
    void draw() {
      drawVerticalScrollBar();
    }
    string getDescription()
    {
      return("Description: Vertical Scroll Bar\n");
    }
    private:
      void drawVerticalScrollBar() {
          cout << "drawing vertical scroll bar" << endl;
      }
    Window* window;
};

#endif
