#include<bits/stdc++.h>
using namespace std;

#ifndef MODULE_3_H
#define MODULE_3_H

struct Node{
    string data;
    struct Node *next;
};

Node* insertNode(Node* &,string &);
void deleteNode(Node** , string &);
int countNodes(Node* &);

 
#endif
