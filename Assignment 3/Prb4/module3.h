#ifndef GAME_H
#define GAME_H
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
class person {
    public: string name;
	        int id;
	        person* next;
    person(){
        name = "";
        id = 0;
        next = NULL;
    }
    person(string name, int id){
        this->name = name;
        this->next = NULL;
        this->id = id;
    }
};
class Link{
    private:
    person* head;
    public:
    Link(){
        head = NULL;
    }
    void insert(int&, string);
    static void display();
    person* del(int&, int&, int);
};


#endif 