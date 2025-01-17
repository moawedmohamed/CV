#include <iostream>
using namespace std;
class rectangles
{
    int *width, *height;

public:
    rectangles(int, int);
    ~rectangles();
    int area()
    {
        return (*width) * (*height);
    }
};
rectangles::rectangles(int w, int h)
{
    width = new int;
    height = new int;
    *width = w;
    *height = h;
}
rectangles::~rectangles()
{
    delete width;
    delete height;
}

int main()
{
    // int *ptr;
    // ptr = new int;
    // *ptr = 10;
    // cout << *ptr;
    // delete ptr;
    // ptr = new int;
    // *ptr = 20;
    // cout << *ptr;
    rectangles r1(3, 4), r2(6, 7);
    cout << "reac1 = " << r1.area() << endl;
    cout << "reac2 = " << r2.area() << endl;
    return 0;
}