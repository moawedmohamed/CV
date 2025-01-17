#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct exam
{
    float first;
    float second;
    float final;
};
class subject
{
private:
    string name;
    exam Exam;

public:
    subject ()
    {

        name = "no name";
        Exam= {0, 0, 0};
    };
    subject (string n, float f, float s, float fi){
        name = n;
        Exam.first = f;
        Exam.second = s;
        Exam.final = fi;
    }
    void total(){
        cout << Exam.first + Exam.second + Exam.final << endl;
    }
    void print(){
        cout << name << endl;
        cout << "First exam: " << Exam.first << endl;
        cout << "Second exam: " << Exam.second << endl;
        cout << "Final exam: " << Exam.final << endl;
        total();
    }
};
int main()
{
    subject s1("Math", 85, 92, 88);
    s1.print();

    return 0;
}