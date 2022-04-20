#include<bits/stdc++.h>
using namespace std;
const int SIZE = 100;
class Person{

    protected:
        char *name;
        int age;
        char gender;

    public :
        //Default Constructor
        Person() : name(NULL) , age(0), gender(NULL) {};
        //Parameterised Constructor
        Person(char *name, int age, char gender) : age(age) , gender(gender){
            this -> name = new char[SIZE];
            strcpy(this -> name, name);
        }
        // Destructor
        ~Person(){
            delete[] name;
        }

        void  read();
        void display();
};

void Person::read() {

    char namedata[SIZE];
    cout << "NAME: " << endl;
    cin >> namedata;
    name = new char[SIZE];
    strcpy(name, namedata);
    cout << "AGE: " << endl;
    cin >> age;
    cout << "GENDER: " << endl;
    cin >> gender;
}

void Person::display() {

    cout << "NAME: " << name << endl;
    cout << "AGE: " << age << endl;
    cout << "GENDER: " << gender << endl;
}

class Staff : protected Person {
    int salary;
    public:
        Staff() : salary(0) {};
        Staff(char *name, int age, char gender, int salary) : Person(name, age, gender), salary(salary) {};
        void read();
        void display();
};

void Staff::read() {
    Person::read();
    cout << "SALARY: ";
    cin >> salary;
}

void Staff::display() {
    Person::display();
    cout << "SALARY: " << salary << endl;
}

class Student : private Person {
    char *dept;
    int year;
    public : 
        Student() : dept(NULL) , year(0) {};
        Student(char *name, int age, char gender, char *dept, int year) : Person(name, age, gender), year(year)
        {
            this -> dept = new char[SIZE];
            strcpy(this -> dept, dept);
        }

        ~Student() {
            delete[] dept;
        }

        void read();
        void display();
};

void Student::read() {
    char deptdata[SIZE];
    cout << "Reading Student data" << endl;
    Person::read();
    cout << "DEPT: " << endl;
    cin >> deptdata;
    dept = new char[SIZE];
    strcpy(dept, deptdata);
    cout << "YEAR: " << endl;
    cin >> year;
}

void Student::display() {
    cout << "Displaying Student data" << endl;
    Person::display();
    cout << "DEPT: " << dept << endl;
    cout << "YEAR: " << year << endl;
    
}

class Professors : private Staff {
    int courseLoad;

   public:
    Professors() : courseLoad(0) {};

    Professors(char *name, int age, char gender, int courseLoad, int salary): Staff(name, age, gender, salary), courseLoad(courseLoad) {}

    void read();
    void display();
};

void Professors::read() {
    cout << "Reading Professor data " << endl;
    Staff::read();
    cout << "COURSE LOAD: ";
    cin >> courseLoad;
}

void Professors::display() {
    cout << "Displaying Professor data" << endl;
    Staff::display();
    cout << "COURSE LOAD: " << courseLoad << endl;
}

class Clerk : private Staff {
    int workLoad;
    public:
        Clerk() : workLoad(0){}; 
        Clerk(char *name, int age, char gender, int workLoad, int salary): Staff(name, age, gender, salary), workLoad(workLoad) {}

        void read();
        void display();
};

void Clerk::read() {
    cout << "Reading Clerk data " << endl;
    Staff::read();
    cout << "WORK LOAD: ";
    cin >> workLoad;
}

void Clerk::display() {
    cout << "Displaying Clerk data" << endl;
    Staff::display();
    cout << "WORK LOAD: " << workLoad << endl;
}

int main() {

            /*
            Heirarchial structure

                      Person
                    /        \
                Student     Staff
                          /     \
                        Prof   Clerk

            */
           
    // READING STUDENT DATA
    Student std1;
    std1.read();
    std1.display();
    // READING PROFESSOR DATA
    Professors prof1;
    prof1.read();
    prof1.display();
    //READING CLERK DATA
    Clerk clk1;
    clk1.read();
    clk1.display();
    return 0;
}

