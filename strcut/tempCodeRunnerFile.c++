#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct distance
{
    int feet;
    int inches;
};
distance dis(distance d, distance d2)
{
    distance result;
    result.feet = d.feet + d2.feet;
    result.inches = d.inches + d2.inches;
    return result;
}

int main()
{
    distance d1, d2, d3;
    cout << "Enter distance in feet and inches for first object: ";
    cin >> d1.feet >> d1.inches;
    cout << "Enter distance in feet and inches for second object: ";
    cin >> d2.feet >> d2.inches;
    d3 = dis(d1, d2);
    cout << "d3.feet" << d3.feet << endl;
    return 0;
}