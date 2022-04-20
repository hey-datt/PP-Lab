#include<bits/stdc++.h>
#include "module3.h"

using namespace std;

int main() {
   Link list;
	int n,s;
	int choice = 0;
	int key;
	person* evict=NULL;
	string nm;
	while(choice!=2)
	{
		cout<<"Enter:\n 1 to continue \n 2 to exit\n";
		cin>>choice;
		if(choice==1)
		{
			cout<<"Enter the number of persons: ";
				cin>>n;
				for(int i=0;i<n;i++) {
					cout<<"Enter name of the person: ";
					cin>>nm;
                  int pass = i+1;
					list.insert(pass, nm);
				}
				cout<<"Enter the number s to be skipped: ";
				cin>>s;
				srand((unsigned)time(0));
				while(n!=1)
				{
					key = 1+ (rand()%n);
					evict = list.del(key,n,s);
					n--;
					cout<<evict->id<<" "<<evict->name<<"\n";
				}
		
		}
		else if(choice==2)
		{
			break;
		}
	}
	
	return 0;
    
}