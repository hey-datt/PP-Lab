#include<bits/stdc++.h>
using namespace std;


class GrowingStack{
    int size;
    int *space;
    int top;
    
    GrowingStack();

public: 
        void inflate(int&);
        inline int isEmpty();
        void push(const int&);
        int pop();
        inline int getMaxSize() const;
        inline int currentSize() const;
        void display();
        
        inline GrowingStack(int&);
        inline GrowingStack(const GrowingStack&);
        ~GrowingStack();
        GrowingStack& operator = (GrowingStack const&);
};

//Default Constructor
inline GrowingStack::GrowingStack(){
    size = 0;
    space = NULL;
    top = -1;
    
}

//Paramterised Constructor
inline GrowingStack::GrowingStack(int &size){
    size = size;
    space = new int[size];
    top = -1;
    
}

//copy Constructor
inline GrowingStack::GrowingStack(const GrowingStack &stack){
    size = stack.size;
    space = new int[stack.size];
    top = stack.top;
    for(int i = 0; i < stack.size; i++){
            space[i] = stack.space[i];
    } 
}

//Destructor
GrowingStack::~GrowingStack(){
    delete[] space;
}

//Overloaded = operator
GrowingStack& GrowingStack::operator = (GrowingStack const &obj){
    if(this == &obj)
	return *this;
	int min_n = min(obj.size, size);
	for(int i=0;i<min_n;i++){
		space[i] = obj.space[i];
    }
	return *this;
}

void GrowingStack::push(const int &item){
    int newSize;
    if(top==size-1){
        cout<<"Stack size Full"<<endl;
        cout<< "Enter the new size "<<endl;
        cin>>newSize;
        inflate(newSize);
        space[++top] = item;
            
    }
    
    else{
        top++;
        space[top]=item;
        
    }
}

void GrowingStack::inflate(int &newSize){
    size += newSize;
    int *newStack = new int[size];

    for(int i = 0; i < size-newSize; i++){
        newStack[i] = space[i];
    }
    delete []space;
    space = newStack;
}

inline int GrowingStack::isEmpty(){
    return (top==-1)?1:0;
}

int GrowingStack::pop(){
    int x=-1;
    if(top==-1)
    cout<<"STACK IS EMPTY"<<endl;
    else{
        x=space[top];
        top--;
    }
    return x;
}

inline int GrowingStack::getMaxSize() const{
    return size;
}

inline int GrowingStack::currentSize() const{
    return top;
}

void GrowingStack::display(){
    while(!isEmpty()){
        cout<<space[top]<<" ";
        top--;
    }
    cout<<endl;
}

int main(){
    
    int n1,n2,n3;
        cout<<"Enter size of stack 1"<<endl;
        cin>>n1;
        cout<<"Enter size of stack 2"<<endl;
        cin>>n2;
        cout<<"Enter size of stack 3"<<endl;
        cin>>n3;

		GrowingStack stack1(n1);
		GrowingStack stack2(n2);
		GrowingStack stack3(n3);

        int x=1;
  		while(x)
  		{
  		 	cout<<"if you do not want to insert in stack1 enter 0 else enter the number\n ";
  		 	cin>>x;
  		 	if(x)
  		 	stack1.push(x); 
  		}
  		x=1;
  		while(x)
  		{
  		 	cout<<"if you do not want to insert in stack2 enter 0 else enter the number\n";
  		 	cin>>x;
  		 	if(x)
  		 	stack2.push(x); 
  		}
  		int i=0;
  		while((!stack1.isEmpty())&&(!stack2.isEmpty()))
  		{
  		 	int num;
  		 	if(i%2==0&&(!stack1.isEmpty()))
  		 	{
  		 	 	num=stack1.pop();
  		 	 	stack3.push(num); 
  		 	}  
  		 	if(i%2==1&&(!stack2.isEmpty()))
  		 	{
  		 	 	num=stack2.pop();
  		 	 	stack3.push(num); 
  		 	}
  		 	i++;  
  		}   

  		while(!stack1.isEmpty())
  		{
  		  	int num;
  		  	num=stack1.pop();
  		  	stack3.push(num); 
  		}

  		while(!stack2.isEmpty())
  		{
  		  	int num;
  		  	num=stack2.pop();
  		  	stack3.push(num); 
  		}

  		cout<<"Stack3 contains\n";
  		stack3.display();
  		cout<<endl;
    return 0;
        
        
}



