#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string daysOfWeek[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
enum days
{
    sat,
    sun,
    man,
    tus,
    wed,
    thur,
    fri
};
class Days
{
private:
    days d[7];

public:
    void setDay(days w[])
    {
        for (size_t i = 0; i < 7; i++)
        {
            d[i] = w[i];
        }
    }
    void print()
    {
        for (int i = 0; i < 7; i++)
        {

            cout << "the day is " << daysOfWeek[i] << "=" << d[i] << endl;
        }
    }
};
int main()
{
    days d[7] = {sat,
                 sun,
                 man,
                 tus,
                 wed,
                 thur,
                 fri};
    Days obj;
    obj.setDay(d);
    obj.print();
}