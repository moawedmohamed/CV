#include <iostream>
#include <string>
#include <cstring>
using namespace std;
enum days
{
    sat = 1,
    sun,
    man,
    tus,
    wed,
    thur,
    fri
};

int main()
{
    string daysOfWeek[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    days m[7] = {
        sat,
        sun,
        man,
        tus,
        wed,
        thur,
        fri};

    for (int i = 0; i < 7; i++)
    {
        cout << m[i] << " = " << daysOfWeek[i] << endl;
    }
}
