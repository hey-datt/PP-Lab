#include<bits/stdc++.h>
using namespace std;

template<class T>
void bubblesort(T[], int);




template<class T>
void do_swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<class T>
void bubblesort(T arr[], int n){
    int i,j;
    for(i = 0; i < n-1 ; i++){
        for(j = 0 ; j < n-1-i ; j++){
            if(arr[j] > arr[j+1]){
                do_swap(arr[j], arr[j+1]);
            }
        }
    }
}

template<class T>
void printArray(T arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    cout<<fixed<<setprecision(2);
    int n;
    cout<<"Enter the number of integers "<<endl;
    cin>>n;
    int *arr = new int[n];
    //int arr[n];
    cout<<"Enter the "<<n<<" integer values "<<endl;
    for(int i =0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<"AFTER SORTING "<<endl;
    bubblesort(arr,n);
    printArray(arr,n);

    float *arr1=new float[n];
    //float arr1[n];
    cout<<"Enter the "<<n<<" floating values "<<endl;
    for(int i =0 ; i < n ; i++){
        cin>>arr1[i];
    }
    cout<<"AFTER SORTING "<<endl;
    bubblesort(arr1,n);
    printArray(arr1,n);

    double *arr2=new double[n];
    //double arr2[n];
    cout<<"Enter the "<<n<<" double values "<<endl;
    for(int i =0 ; i < n ; i++){
        cin>>arr2[i];
    }
    cout<<"AFTER SORTING "<<endl;
    bubblesort(arr2,n);
    printArray(arr2,n);

    return 0;
}
