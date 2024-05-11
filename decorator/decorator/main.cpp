#include "Toy.hpp"
#include "Scope.hpp"
#include "Muffler.hpp"

using namespace std;

int main()
{
    I *toy = new Muffler(new Scope(new Toy()));
    toy->play();

    return 0;
}
