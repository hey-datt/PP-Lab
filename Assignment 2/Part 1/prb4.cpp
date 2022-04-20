#include<bits/stdc++.h>
using namespace std;

template<class T>
void do_swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b;
    cout<<"Enter 1st value for a"<<endl;
    cin>>a;
    cout<<"Enter 2nd value for b"<<endl;
    cin>>b;
    do_swap<int>(a,b);
    cout<<"Value for a is "<<a<<endl;
    cout<<"Value for b is "<<b<<endl;
    return 0;
}