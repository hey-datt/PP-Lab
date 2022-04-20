#include<bits/stdc++.h>
using namespace std;
const int SIZE = 100;
class Vehicle{
    private:
        int price;
        char *manufacturer;
    public:

        //Default Constructor
        Vehicle() : price(0) , manufacturer(NULL) {};

        //Parameterised Constructor
        Vehicle(int p, char *m){
            price = p;
            manufacturer = new char[SIZE];
            strcpy(manufacturer, m);
        }

        //Copy Constructor
        Vehicle(Vehicle &rhs) : price(rhs.price) {
            manufacturer = new char[SIZE];
            strcpy(manufacturer, rhs.manufacturer);
        }
        //Assignment Operator
        Vehicle& operator = (const Vehicle &);

        void read();

        void display();
};

//Assignment operator
Vehicle &Vehicle :: operator = (const Vehicle &rhs){
    if(this == &rhs)
    return *this;
    delete[] manufacturer;
    price = rhs.price;
    manufacturer = new char[SIZE];
    strcpy(manufacturer,rhs.manufacturer);
    return *this;
} 

void Vehicle :: read(){
    char data[SIZE];
    cout << "ENTER THE PRICE OF VEHICLE " << endl;
    cin >> price;
    cout << "ENTER THE MANUFACTURER " << endl;
    cin >> data;
    manufacturer = new char[SIZE];
    strcpy(manufacturer,data);
}

void Vehicle :: display(){
    cout << "PRICE " << price << endl;
    if(manufacturer == NULL)
    cout << "MANUFACTURER : NOT AVAILABLE " << endl;
    else
    cout << "MANUFACTURER : " << manufacturer << endl;
}

class Car : public Vehicle{
    private : 
        char *color;
        int no_of_seats;
        int model;
    public:
        Car() : color(NULL) , no_of_seats(0), model(0) {};

        Car(char *color, int seats, int m, int price, char *manufacturer) : Vehicle(price, manufacturer) , no_of_seats(seats), model(m)
        {
            this -> color = new char[SIZE];
            strcpy(this -> color, color);
        }

        Car(Car &rhs) : Vehicle(rhs), no_of_seats(rhs.no_of_seats), model(rhs.model){
            this -> color = new char[SIZE];
            strcpy(this -> color, rhs.color);
        }

        void read();

        void display();
};

void Car :: read(){

    char colordata[SIZE];
    Vehicle::read();
    cout << "READING CAR DATA" << endl;
    cout << "ENTER COLOR: ";
    cin >> colordata;
    color = new char[SIZE];
    strcpy(color, colordata);
    cout << "ENTER NUMBER OF SEATS: ";
    cin >> no_of_seats;
    cout << "ENTER MODEL NUMBER: ";
    cin >> model;
}

void Car::display() {

    
    cout << "DISPLAYING CAR INFO " << endl;
    Vehicle::display();
    if (color == NULL) 
    cout << "COLOR: NOT AVAILABLE " << endl;
    else 
    cout << "COLOR: " << color << endl;
    
    cout << "MODEL: " << model << endl;
    cout << "SEATS: " << no_of_seats << endl;
}

int main() {
    Car ob1;
    ob1.read();
    ob1.display();
    return 0;
}

