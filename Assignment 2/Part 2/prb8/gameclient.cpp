#include "module3.h"

int main()
{
    person *headptr =  new person;
    int n,s;
    cout<<"\nEnter the number of persons: ";
    cin>>n;
    // cout<<"Enter number of persons to be skipped:  ";
    // cin>>s;
    s = randskipgen();
    headptr = createList(n, headptr);
    headptr = randsel(headptr, n);
    cout<<"The persons are: "<<"\n";
    display(headptr);
    cout<<"\nGame starts: ";
    for(int i=0;i<n-1;i++){
        headptr = del(headptr, s, n);
        cout<<"\nRemaining persons: ";
        display(headptr);
    }
    cout<<"\nWinner: "<<headptr->name<<endl;
    return 0;
}