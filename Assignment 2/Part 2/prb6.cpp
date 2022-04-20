#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000;

template<class T>

struct GrowingStack{
    int size;
    int top;
    T *space;
};

template<typename T>
void inflate(GrowingStack<T> &a, int &newSize){
    
    T *newStack;
    if(newSize <= MAX)
    newStack = new T[newSize];
    else
    newStack = new T[MAX];

    for(int i = 0; i < a.size; i++){
        newStack[i] = a.space[i];
    }
    a.size = newSize;
    delete []a.space;
    a.space = newStack;
    

}

template<typename T>
inline int isEmpty(GrowingStack<T> &a){
    //if(stack.top==-1)
    //return 1;
    //else
    //return 0;
    return (a.top==-1)?1:0;
}

template <typename T>
void initialize(GrowingStack<T> &a, int n=30){
    a.space= new T[n];
    a.size=n;
    a.top=-1;
}

template <typename T>
void  push(GrowingStack<T> &a, int &item){
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

template <typename T>
T pop(GrowingStack<T> &a){
    T x=-1;
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

template<typename T>
inline int currentSize(GrowingStack<T> &a){
    return a.size;
}

template<typename T>
void display(GrowingStack<T> &a){
    while(!isEmpty<T>(a)){
        cout<<a.space[a.top]<<" ";
        a.top--;
    }
    cout<<endl;
}


int main(){

    int ch;
	cout<<"Enter choice: \n1.int array \n2.float array \n3.double array "<<endl;
	cin>>ch;
    if(ch == 1){

        GrowingStack<int> stack1, stack2, stack3;
        int n1,n2,n3;
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
            push<int>(stack1,num);
            
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
            push<int>(stack2,num2);
            cout<<"Press 1 to continue or 0 to stop"<<endl;
            cin>>choice2;
            cout<<"----------------"<<endl;
        }

        while(!isEmpty<int>(stack1) && !isEmpty<int>(stack2)){

            if(i%2!=0 && !isEmpty<int>(stack1)){
                data=pop<int>(stack1);
                push<int>(stack3,data);
            }
            else if(i%2==0 && !isEmpty<int>(stack2)){
                data=pop<int>(stack2);
                push<int>(stack3,data);
            }


            i++;
        }
        while(!isEmpty<int>(stack1)){
            int data=pop<int>(stack1);
            push<int>(stack3, data);
        }

        while(!isEmpty<int>(stack2)){
            int data=pop<int>(stack2);
            push<int>(stack3,data);
        }

        cout<<"Stack 3 contains"<<endl;
        display<int>(stack3);

    }

    if(ch == 2){

        GrowingStack<float> stack1, stack2, stack3;
        int n1,n2,n3;
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
            push<float>(stack1,num);
            
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
            push<float>(stack2,num2);
            cout<<"Press 1 to continue or 0 to stop"<<endl;
            cin>>choice2;
            cout<<"----------------"<<endl;
        }

        while(!isEmpty<float>(stack1) && !isEmpty<float>(stack2)){

            if(i%2!=0 && !isEmpty<float>(stack1)){
                data=pop<float>(stack1);
                push<float>(stack3,data);
            }
            else if(i%2==0 && !isEmpty<float>(stack2)){
                data=pop<float>(stack2);
                push<float>(stack3,data);
            }


            i++;
        }
        while(!isEmpty<float>(stack1)){
            int data=pop<float>(stack1);
            push<float>(stack3, data);
        }

        while(!isEmpty<float>(stack2)){
            int data=pop<float>(stack2);
            push<float>(stack3,data);
        }

        cout<<"Stack 3 contains"<<endl;
        display<float>(stack3);

    }

    if(ch == 3){

        GrowingStack<double> stack1, stack2, stack3;
        int n1,n2,n3;
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
            push<double>(stack1,num);
            
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
            push<double>(stack2,num2);
            cout<<"Press 1 to continue or 0 to stop"<<endl;
            cin>>choice2;
            cout<<"----------------"<<endl;
        }

        while(!isEmpty<double>(stack1) && !isEmpty<double>(stack2)){

            if(i%2!=0 && !isEmpty<double>(stack1)){
                data=pop<double>(stack1);
                push<double>(stack3,data);
            }
            else if(i%2==0 && !isEmpty<double>(stack2)){
                data=pop<double>(stack2);
                push<double>(stack3,data);
            }


            i++;
        }
        while(!isEmpty<double>(stack1)){
            int data=pop<double>(stack1);
            push<double>(stack3, data);
        }

        while(!isEmpty<double>(stack2)){
            int data=pop<double>(stack2);
            push<double>(stack3,data);
        }

        cout<<"Stack 3 contains"<<endl;
        display<double>(stack3);

    }

    return 0;    
    
}