#include <iostream>
#include <cstring>
using namespace std;
class Rectangle
{
    int w, h;

public:
    Rectangle(int width, int height)
    {
        w = width;
        h = height;
        cout << "Rectangle " << endl;
    }
    ~Rectangle()
    {
        cout << "width is " << w << "height is " << h << endl;
    }
};
int main()
{
    Rectangle r1(2, 5), r2(7, 9);
}