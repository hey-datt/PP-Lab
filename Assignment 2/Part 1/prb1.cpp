#include<bits/stdc++.h>
using namespace std;
#define MAX_NAME_LEN 50
#define MAX_DEPT_LEN 50

typedef struct student{
    char name[MAX_NAME_LEN];
    int age;
    char dept[MAX_DEPT_LEN];
    int year;
}student;


void ReadStudentData(student s[],int n){

    
    for(int i=0;i<n;i++){
        cout<<"For Student "<<i+1<<endl;

        cout<<"Enter Name "<<endl;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin.getline(s[i].name,MAX_NAME_LEN);
        //cin>>s[i].name;

        cout<<"Enter age"<<endl;
        cin>>s[i].age;

        cout<<"Enter Department "<<endl;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin.getline(s[i].dept,MAX_DEPT_LEN);
        //cin>>s[i].dept;

        cout<<"Enter Year"<<endl;
        cin>>s[i].year;

        cout<<"--------------------"<<endl;
    }
}

void PrintStudentData(student s[],int n){
    cout<<"The information of student "<<n<<"is"<<endl;
    int i=n-1;

    cout<<"Name: "<<s[i].name<<endl;
    cout<<"Age: "<<s[i].age<<endl;
    cout<<"Department: "<<s[i].dept<<endl;
    cout<<"Year: "<<s[i].year<<endl;


}

int main(){
    int n;
    cout<<"Enter Number of students"<<endl;
    cin>>n;

    student* s=new student[n];
    ReadStudentData(s,n);
    int i;
    cout<<"Enter which student's information you want to see"<<endl;
    cin>>i;
    PrintStudentData(s,i);

    delete[] s;
    return 0;
}

