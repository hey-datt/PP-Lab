#include<bits/stdc++.h>
using namespace std;
#define MAX_NAME_LEN 100
#define MAX_DEPT_LEN 100
class Student{
    char name[MAX_NAME_LEN];
    int age;
    char dept[MAX_DEPT_LEN];
    int year;

public:
    void ReadStudentData();
    void PrintStudentData() const;
};

void Student::ReadStudentData(){
    cout << "Enter name " << endl;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin.getline(name,MAX_NAME_LEN);
    cout << "Enter Age" << endl;
    cin >> age;
    cout << "Enter Department" << endl;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin.getline(dept,MAX_DEPT_LEN);
    cout << "Enter  year" << endl;
    cin >> year;
}

void Student::PrintStudentData() const{
    
    cout<<"NAME: "<<name<<" "<<"AGE: "<<age<<" "<<"DEPARTMENT: "<<dept<<" "<<"YEAR: "<<year<<endl;
}

Student* ReadStudent(int n){
    Student *s = new Student[n];
    for(int i = 0; i < n; i++){
        cout<<"Enter details of student: " <<i+1<<endl;
        s[i].ReadStudentData();
    }
    return s;
}

void PrintStudent(Student *s, int n){
    for(int i = 0; i < n; i++){
        s[i].PrintStudentData();
    }
}

int main(){
    Student *s;
    int n;
    cout << "Enter the number of Student " << endl;
    cin >> n;

    s = ReadStudent(n);
    cout << "The Details of "<<n<< " Students are "<<endl;
    PrintStudent(s,n);

    return 0;
}


