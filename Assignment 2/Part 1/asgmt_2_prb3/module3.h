#ifndef GAME_H
#define GAME_H
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
struct person {
	string name;
	int id;
	person* next;
};
person* head =  NULL;
void insert(int, string);
person* del(int, int, int);
#endif 