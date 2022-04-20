#include <iostream>
#include "prototype.h"
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class LinkNode
{
    public: int data;
    LinkNode *next;
    LinkNode(int data)
    {
        
        this->data = data;
        this->next = NULL;
    }
};


class CircularList
{
    public: LinkNode *head;
    LinkNode *rear;
    CircularList()
    {
        this->head = NULL;
        this->rear = NULL;
    }
  
    void addNode(int data)
    {
        LinkNode *node = new LinkNode(data);
        if (this->head == NULL)
        {
         
            this->head = node;
        }
        else
        {
         
            this->rear->next = node;
        }

        node->next = this->head;

        this->rear = node;
    }
};
class winner
{     int size;
      int n;
    public:
       
        void position(int size, int n)
        {
            if (n <= 0)
            {
                return;
            }
            if (n == 1)
            {
              
                cout << " the winning position is: " << size << " \n";
                return;
            }
            CircularList cll = CircularList();
           
            for (int i = 1; i <= size; ++i)
            {
                cll.addNode(i);
            }
            
            LinkNode *temp = cll.head;
            LinkNode *back = cll.head;
            int counter = 0;
            cll.head = NULL;
            cll.rear = NULL;
           
            while (temp->next != temp)
            {
              
                counter = 1;
                while (counter != n)
                {
                 
                    back = temp;
                 
                    temp = temp->next;
                    counter++;
                }
               
                back->next = temp->next;
                delete temp;
             
                temp = back->next;
            }
            cout << "\n Size : " << size << " N : " << n << " \n";
         
            cout << " the winning position is: " << temp->data << " \n";
            cll.head = temp;
            cll.rear = temp;
        }
        };
  
int main()
{
    winner task = winner();
   
    
    int size;
    int n;
    cout<<"enter the size of CLL and number of person to be skipped at a time: "<<endl;
    cin>>size>>n;
    task.position(size, n);

    return 0;
}

