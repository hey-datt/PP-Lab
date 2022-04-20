#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name, department;
    int age, year;

public:
    void ReadStudentData()
    {
        cout << "Enter name:  ";
        cin >> name;
        cout << "Enter age:  ";
        cin >> age;
        cout << "Enter department: ";
        cin >> department;
        cout<< "Enter year: ";
        cin >> year;
    }

    void PrintStudentData()
    {
    	 cout<<"Student Data: "<<"\n";
        cout << "Name: " << name << endl;

        cout << "Age : " << age << endl;
        cout << "Department:  " << department << endl;

        cout << "Year: " << year << endl;
    }
};

int main()
{
    int n;
    cout << "Enter No. of students:  ";
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; i++)

    {
        cout << endl
             << "Enter info of student: " << i + 1 << endl;
        st[i].ReadStudentData();
    }
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Printing info of student: " << i + 1 << endl;

        st[i].PrintStudentData();
    }
}