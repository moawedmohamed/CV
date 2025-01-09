#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class student
{

private:
    char name[20];
    int id;

public:
    student()
    {
        strcpy(name, "no name");
        id = 0;
    }
    student(char n[], int i)
    {
        cout << "parameterize constructor " << endl;
        strcpy(name, n);
        id = i;
    }
    student(char n[]){
        strcpy(name,n);
        id = 0;
    }
    void print()
    {
        cout << "name =" << name << endl;
        cout << "id =" << id << endl;
    }
};
int main()
{
    char name[40];
    for (int i = 0; i < 5; i++)
    {
        cin >> name[i];
    }

    int id;
    cout << "Enter name and id: ";
    cin >> id;

    student ob(name);
    ob.print();
}