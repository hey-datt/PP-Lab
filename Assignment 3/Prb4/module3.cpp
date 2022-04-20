#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include "module3.h"

using namespace std;

//struct person {
//	string name;
//	int id;
//	person* next;
//};

person* head =  NULL;


void Link::insert(int &id, string name)
{
	person* newper = new person;
	person* ptr =  head;
	newper->name =  name;
	newper->id =  id;
	newper->next = head;
	if(head!=NULL)
	{
		person* temp = head;
		while(temp->next != head)
			temp= temp->next;
		temp->next = newper;
	} else 
		newper->next = newper;
	head = newper;	
}

static void display() {
	person* ptr;
	ptr=head;
	cout<<ptr->name<<" ";
	ptr = ptr->next;
	while(ptr!=head)
	{
		cout<<ptr->id<<" ";
		ptr = ptr->next;
	}
}

person* del(int &key, int &n, int skip=2)
{
	person* ptr  = head;
	person* begin = NULL;
	while(ptr->next!=head)
	{
		if(ptr->id==key) {
			begin =  ptr;
			break;
		}

	}
	int total = 0;
	skip%=n;
	while(--skip)
	{
		ptr = ptr->next;
	}
	if(n>1)
		ptr->next = ptr->next->next;
	else if(n==1)
		ptr->next = ptr;
	ptr = ptr->next;
	person* evict = ptr;
	begin = NULL;   
	delete ptr;
	return evict;
}