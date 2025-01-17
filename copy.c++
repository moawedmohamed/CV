#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class copy1
{
private:
    int n1, n2, n3, n4;

public:
    copy1(int a1, int a2, int a3, int a4)
    {
        n1 = a1;
        n2 = a2;
        n3 = a3;
        n4 = a4;
    };
    copy1(copy1 &obj)
    {
        n1 = obj.n1;
        n2 = obj.n2;
        n3 = obj.n3;
        n4 = obj.n4;
    }
    void display()
    {
        cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
    }
};
int main()
{
    copy1 obj1(1, 2, 3, 4);
    copy1 obj2(obj1);
    obj1.display();
    obj2.display();
    return 0;
}