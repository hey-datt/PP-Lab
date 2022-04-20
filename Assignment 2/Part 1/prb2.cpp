#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000;



struct GrowingStack{
    int size;
    int top;
    int *space;
};


void inflate(GrowingStack &a, int &newSize){
    
    int *newStack;
    if(newSize <= MAX)
    newStack = new int[newSize];
    else
    newStack = new int[MAX];

    for(int i = 0; i < a.size; i++){
        newStack[i] = a.space[i];
    }
    a.size = newSize;
    delete []a.space;
    a.space = newStack;
    

}


inline int isEmpty(GrowingStack &a){
    //if(stack.top==-1)
    //return 1;
    //else
    //return 0;
    return (a.top==-1)?1:0;
}


void initialize(GrowingStack &a, int n=30){
    a.space= new int[n];
    a.size=n;
    a.top=-1;
}


void  push(GrowingStack &a, int &item){
    if(a.top==a.size-1){
        cout<<"Stack size Full"<<endl;
        cout<< "If You want to enter more elements, Press 1"<<endl;
        int n;
        cin>>n;
        if(n==1){
            int newSize;
            cout<<"Enter new Size of array "<<endl;
            cin>>newSize;
            inflate(a, newSize);
            //a.space[a.top]=item;
            a.top++;
        }
    }
    else{
        a.top++;
        a.space[a.top]=item;
        
    }
}


int pop(GrowingStack &a){
    int x=-1;
    if(a.top==-1)
    cout<<"STACK IS EMPTY"<<endl;
    else{
        x=a.space[a.top];
        a.top--;
    }
    return x;
}

inline int getMaxSize(){
    return MAX;
}


inline int currentSize(GrowingStack &a){
    return a.size;
}


void display(GrowingStack &a){
    while(!isEmpty(a)){
        cout<<a.space[a.top]<<" ";
        a.top--;
    }
    cout<<endl;
}


int main(){

        GrowingStack stack1, stack2, stack3;
        int n1,n2,n3,m1,m2;
        cout<<"Enter size of stack 1"<<endl;
        cin>>n1;
        
        cout<<"Enter size of stack 2"<<endl;
        cin>>n2;
        

        cout<<"Enter size of stack 3"<<endl;
        cin>>n3;

        


        initialize(stack1, n1);
        initialize(stack2, n2);
        initialize(stack3, n3);

        int i=1,data;
        int choice,num;

        
        cout<<"Enter 1 to insert element in Stack 1"<<endl;
        cin>>choice;
        cout<<"--------------"<<endl;
        while(choice==1){
            cout<<"Enter the element of stack 1 "<< endl;
            cin>>num;
            push(stack1,num);
            
            cout<<"Press 1 to continue or 0 to stop"<<endl;
            cin>>choice;
            cout<<"-------------------"<<endl;
        }

        int choice2, num2;
        cout<<"Enter 1 to insert element in Stack 2"<<endl;
        cin>>choice2;
        while(choice2==1){
            cout<<"Enter the element of stack 2"<< endl;
            cin>>num2;
            push(stack2,num2);
            cout<<"Press 1 to continue or 0 to stop"<<endl;
            cin>>choice2;
            cout<<"----------------"<<endl;
        }

        while(!isEmpty(stack1) && !isEmpty(stack2)){

            if(i%2!=0 && !isEmpty(stack1)){
                data=pop(stack1);
                push(stack3,data);
            }
            else if(i%2==0 && !isEmpty(stack2)){
                data=pop(stack2);
                push(stack3,data);
            }


            i++;
        }

        while(!isEmpty(stack1)){
            int data=pop(stack1);
            push(stack3, data);
        }

        while(!isEmpty(stack2)){
            int data=pop(stack2);
            push(stack3,data);
        }

        cout<<"Stack 3 contains"<<endl;
        display(stack3);

    

    

    return 0;    
    
}