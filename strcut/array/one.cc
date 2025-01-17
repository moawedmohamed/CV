#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class student
{
    char name[100];
    int id;

public:
    student()
    {
        cout << "empty\n";
        strcpy(name, "no name");
        id = 0;
    }
    student(char n[], int i)
    {
        cout << "parametrize\n";
        strcpy(name, n);
        id = i;
    }
    void display()
    {
        cout << "Name: " << name << ", ID: " << id << endl;
        // cout << "Name: " << name << endl;
        // cout << "ID: " << id << endl
    }
};
int main()
{
    student s1("ali", 20), s2("mohamed", 40), *p;
    student array[3] = {s1, s2, s2};
    p = array;
    for (size_t i = 0; i < 3; i++)
    {
        // there are three different ways to print the objects ;
        //  array[i].display();
        //  (p + i)->display();
        p++->display();
    }

    //     int array[5] = {10, 1, 2, 3, 4};
    //     int *prt = array;
    //     // cout << (prt+1) << endl;
    //     for (size_t i = 0; i < 5; i++)
    //     {
    //         cout << *(prt++) << " ";
    //     }
}