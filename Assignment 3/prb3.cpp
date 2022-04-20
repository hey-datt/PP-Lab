#include<bits/stdc++.h>
using namespace std;

template<typename T>
class GrowingStack{
    int size;
    T *space;
    int top;
    

public: 
        void inflate(int&);
        void push(const int&);
        T pop();
        inline int getMaxSize() const;
        inline int currentSize() const;
		inline int isEmpty();
        void display();
        GrowingStack();
        GrowingStack(int&);
        GrowingStack(const GrowingStack&);
        ~GrowingStack();
		GrowingStack& operator = (GrowingStack const&);
};

//Default Constructor
template<typename T>
GrowingStack<T>::GrowingStack()
{
  space = NULL;
  size = 0;
  top = -1;
}
//Parametrised Constructor
template<typename T>
GrowingStack<T>::GrowingStack(int &size)
{
	size = size;
	space =  new T[size];
	top = -1;
}
//Copy Constructor
template<typename T>
GrowingStack<T>::GrowingStack(const GrowingStack<T> &stack)
{ 
  this->size = stack.size;
  this->top = stack.top; 
  space = stack.space;
}
//Destructor
template<typename T>
GrowingStack<T>::~GrowingStack()
{
	delete[] space;
}
//Overloaded = operator
template<typename T>
GrowingStack<T>& GrowingStack<T>::operator = (GrowingStack<T> const &obj){
	if(this == &obj)
	return *this;
	int min_n = min(obj.size, size);
	for(int i=0;i<min_n;i++){
		space[i] = obj.space[i];
	}
	return *this;
}
template<typename T>
void GrowingStack<T>::push(const int &item)
{
	int newsize;
	if(top==size-1){
		cout<<"Stack size Full"<<endl;
		cout << "Enter the new size "<<endl;
		cin >> newsize;
		inflate(newsize);
		top++;
		space[top] = item;
    }
    
    else{
        top++;
        space[top]=item;
        
    }

}

template<typename T>
T GrowingStack<T>::pop()
{
	int x=-1;
    if(top==-1)
    cout<<"STACK IS EMPTY"<<endl;
    else{
        x=space[top];
        top--;
    }
    return x;
}


template<typename T>
void GrowingStack<T>::inflate(int &newSize)
{
	size+=newSize;
  	T *newstack=new T[size];
  	for(int i=0;i<size-newSize;i++){
  		newstack[i]=space[i];
	}
  	delete &space;
  	space=newstack;
}

template<typename T>
inline int GrowingStack<T>::getMaxSize() const
{
	return size;
}

template<typename T>
inline int GrowingStack<T>::currentSize() const
{
	return top;
}

template<typename T>
inline int GrowingStack<T>::isEmpty(){
	return (top == -1)?1:0;
}


template<typename T>
void GrowingStack<T>::display()
{
	while(!isEmpty()){
		cout<<space[top]<<" ";
        top--;
	}
	cout << endl;
}

int main(){
    
	int ch;
	cout<<"Enter choice: \n1.int array \n2.float array \n3.double array "<<endl;
	cin>>ch;
    if(ch == 1){

        
        int n1,n2,n3;
        cout<<"Enter size of stack 1"<<endl;
        cin>>n1;
        cout<<"Enter size of stack 2"<<endl;
        cin>>n2;
        cout<<"Enter size of stack 3"<<endl;
        cin>>n3;

		GrowingStack<int> stack1(n1);
		GrowingStack<int> stack2(n2);
		GrowingStack<int> stack3(n3);

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

  		
    
	}
	else if(ch == 2){
		int n1,n2,n3;
        cout<<"Enter size of stack 1"<<endl;
        cin>>n1;
        cout<<"Enter size of stack 2"<<endl;
        cin>>n2;
        cout<<"Enter size of stack 3"<<endl;
        cin>>n3;

		GrowingStack<float> stack1(n1);
		GrowingStack<float> stack2(n2);
		GrowingStack<float> stack3(n3);

        float x=1;
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
  		 	float num;
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
  		  	float num;
  		  	num=stack1.pop();
  		  	stack3.push(num); 
  		}

  		while(!stack2.isEmpty())
  		{
  		  	float num;
  		  	num=stack2.pop();
  		  	stack3.push(num); 
  		}

  		cout<<"Stack3 contains\n";
  		stack3.display();
  		cout<<endl;
	}

else if(ch == 3){
	int n1,n2,n3;
        cout<<"Enter size of stack 1"<<endl;
        cin>>n1;
        cout<<"Enter size of stack 2"<<endl;
        cin>>n2;
        cout<<"Enter size of stack 3"<<endl;
        cin>>n3;

		GrowingStack<double> stack1(n1);
		GrowingStack<double> stack2(n2);
		GrowingStack<double> stack3(n3);

        double x=1;
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
  		 	double num;
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
  		  	double num;
  		  	num=stack1.pop();
  		  	stack3.push(num); 
  		}

  		while(!stack2.isEmpty())
  		{
  		  	double num;
  		  	num=stack2.pop();
  		  	stack3.push(num); 
  		}

  		cout<<"Stack3 contains\n";
  		stack3.display();
  		cout<<endl;
	}
	return 0;
}
