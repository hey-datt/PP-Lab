#include<bits/stdc++.h>
#include "module3.h"
using namespace std;

Node* insertNode(Node* &head, string &data){

    if(head != NULL)
    return head;

    Node* temp = new Node;
    temp->data = data;
    head = temp;
    temp->next = head;
    return head;
}

int countNodes(Node* &head){

    Node* temp = head;
    int count = 0;
    if(head != NULL){
        do
        {
            temp = temp->next;
            count++;
        }while(temp != head);
    }
    return count;
}


void deleteNode(Node** head, string &key)
{
     
    
    if (*head == NULL)
        return;
    if((*head)->data==key && (*head)->next==*head)
    {
        cout<<(*head)->data<<endl;
        free(*head);
        *head=NULL;
        return;
    }
    Node *last=*head;

    if((*head)->data==key)
    {
        while(last->next!=*head){
            last=last->next;
        }
        last->next=(*head)->next;
        cout<<(*head)->data<<endl;
        delete(*head);
        *head=last->next;
        return;
    }

}