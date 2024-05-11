#ifndef HORIZONTALSCROLLBARDECORATOR_H
#define HORIZONTALSCROLLBARDECORATOR_H
#include <iostream>
#include "Window.hpp"

using namespace std;

class HorizontalScrollBarDecorator: public Window {
  public:
    HorizontalScrollBarDecorator(Window *window) { this->window = window; }
    void draw() {
      drawHorizontalScrollBar();
    }
string getDescription()
{
  return("Description: Horizontal Scroll Bar\n");
}
private:
void drawHorizontalScrollBar() {
    cout << "drawing horizontal scroll bar" << endl;
}
    Window* window;
};

#endif



