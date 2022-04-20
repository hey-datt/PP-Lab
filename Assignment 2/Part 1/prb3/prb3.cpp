#include<bits/stdc++.h>
#include "module3.h"
using namespace std;

int main(){
    srand(time(0));
    Node *head = NULL;
    int n;
    string name;
    cout<<"Enter number of perosn"<<endl;
    cin>>n;
    cout<<"Enter the names of person"<<endl;
    for(int i = 0; i < n; i++){
        getline(cin,name);
        head = insertNode(head,name);
    }
    cout<<"Output is "<<endl;

    while(countNodes(head)>0){
        int s,c;
        c = countNodes(head);
        s = rand()%c;
        Node *last = head;
        for(int i = 0; i < s ; i++){
            last = last->next;
            deleteNode(&head, last->data);
        }
    }
    return 0;
}
