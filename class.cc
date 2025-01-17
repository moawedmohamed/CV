#include <iostream>
#include <cstring>
// #include <string>
using namespace std;

class info
{
private:
    string name;
    int ID;
    float GBA;

public:
    void setName(string n)
    {
        name = n;
    }
    void setID(int id)
    {
        ID = id;
    }
    void setGBA(float gba)
    {
        GBA = gba;
    }
    string getName()
    {
        return name;
    }
    int getID()
    {
        return ID;
    }
    float getGBA()
    {
        return GBA;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "GBA Score: " << GBA << endl;
    }
};

int main()
{
    int choice;
    info student1;
    string name;
    cin >> name;
    int id;
    cin >> id;
    float gba;
    cin >> gba;
    student1.setName(name);
    student1.setID(id);
    student1.setGBA(gba);
    while (true)
    {
        cout << "Enter your  choice: ";
        cin >> choice;
        if (choice == 1)
        {

            student1.setName(name);
            student1.setID(id);
            student1.setGBA(gba);
            student1.display();
        }
        else if (choice == 2)
        {
            string name;
            cin >> name;
            int id;
            cin >> id;
            float gba;
            cin >> gba;
            student1.setName(name);
            student1.setID(id);
            student1.setGBA(gba);
        }
        else if (choice == 3)
            return 0;
    }
    return 0;
}
