#ifndef LIBGAME_H
#define LIBGAME_H
#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
using namespace std;
struct person {
	char name[50];
	int id;
	person *next;
};
person* createList(int ,person*);
void display(person*);
person *randsel(person*,int);
person* del(person*, int, int);
int randskipgen();
#endif 