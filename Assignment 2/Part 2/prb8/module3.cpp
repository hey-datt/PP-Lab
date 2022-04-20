#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;

struct person {
    char name[50];
    int id;
    person *next;
};

static int f1(int x)
{
    return  ((x*x*x) - (2*x*x) + (4*x) -1);
}

static int f2(int x)
{
    return ((x*x) - (3*x) + 6);
}

static int f3(int x)
{
    return ((x*x*x*x) + (3*x*x*x) - (2*x*x) + (5*x) -6);
}

static int f4(int x)
{
    return ((x*x) + 7);
}

static int f0(int x)
{
    return (x+8);
}

person* createList(int size, person *ptr) {
    person *cur = ptr;
    for(int i=0;i<size;i++) {
        cout<<"Enter person's name: "<<(i+1)<<": ";
        char nm[50];
        cin>>nm;
        person *newnode =  new person;
        newnode->id =  (i+1);
        strcpy(newnode->name, nm);
        newnode->next = NULL;
        cur->next = newnode;
        cur =  newnode;
    }
    person *p = new person;
    p = ptr;
    ptr = ptr->next;
    cur->next =  ptr;
    delete p;
    return ptr;
}

void display(person *headptr) {
    person *ptr;
    ptr=headptr;
    cout<<"( "<<ptr->id<<" "<<ptr->name<<" )"<<" ";
    ptr = ptr->next;
    while(ptr->id!=headptr->id)
    {
        cout<<"( "<<ptr->id<<" "<<ptr->name<<" )"<<" ";
        ptr = ptr->next;
    }
    cout<<"\n";
}

person *randsel(person* headptr, int size) {
    srand(time(0));
    int pos = rand()%size +1;
    cout<<"Random seleected position: "<<pos<<endl;
    for(int i=0;i<pos;i++)
        headptr = headptr->next;
    return headptr;
} 

int randskipgen()
{
    int x = rand()%10 + 1;
    int fun_ch = rand()%4 + 1;
    int skip = 0;
    if(fun_ch==1)
        skip = f1(x);
    else if(fun_ch==2)
        skip = f2(x);
    else if(fun_ch==3)
        skip = f3(x);
    else if(fun_ch==4)
        skip = f4(x);
    return skip; 
}

person* del(person* headptr, int skip, int size)
{
    int sign =0;
    if(skip<0)
        sign=1;
    skip  =  abs(skip);
    int fl = (skip-1)%size;
    if(sign==1)
    {
        fl =  (size-fl)%size;
    }
    person *prev = NULL;
    int scnt =  0;
    while(scnt<fl)
    {
        prev = headptr;
        headptr =  headptr ->next;
        scnt+=1;
    }
    person *x = new person;
    x = headptr;
    headptr = headptr->next;
    prev->next =  x->next;
    cout<<"\nPerson deleted is: "<<x->name;
    delete x;
    return headptr;
}