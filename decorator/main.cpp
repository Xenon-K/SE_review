#include "HorizontalScrollBarDecorator.hpp"
#include "VerticalScrollBarDecorator.hpp"
#include "WindowDecorator.hpp"
#include "Window.hpp"
#include "SimpleWindow.hpp"

using namespace std;

int main()
{
    Window *simple_window = new SimpleWindow();
    simple_window->draw();

    Window *horizontal_window = new HorizontalScrollBarDecorator(new SimpleWindow());
    horizontal_window->draw();
    return 0;
}
