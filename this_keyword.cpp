#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int Class, Age;
    student(int a, int b)
    {
        this->Class = a;
        this->Age = b;
    }

    void display()
    {
        cout << "Class = " << this->Class << endl;
        cout << "Age = " << this->Age << endl;
    }
};

int main()
{

    int Class, Age;
    cout << "Enter Class and Age of student: ";
    cin >> Class >> Age;

    student student1(Class, Age);

    student1.display();
}