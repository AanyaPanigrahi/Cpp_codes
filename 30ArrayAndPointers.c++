#include <iostream>
using namespace std;

void inparr(int *arr, int n){
    for(int i=0; i<n;i++){
        cout<<"enter "<<i+1<<" element : ";
        cin>>arr[i];
    }
}

void outarr(int *arr, int n){
    cout<<"array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        //cout<<*(arr+i);

    }
    cout<<endl;
}

int main(){
    int array[3]={2,5,7};
    int *ptr=&array[0];
    //similar to arr
    cout<<ptr<<" "<<array<<endl;
    //name of array is also a pointer to its base address
    cout<<*ptr<<" "<<*array<<endl;
    cout<<*(array+0)<<" "<<*(array+1)<<" "<<*(array+2)<<endl;

    int arr[4];
    inparr(arr,4); //or inparr(&arr[0],size)
    outarr(arr,4); //display elements

    //we can point an entire array also
    //used in 2d and 3d arrays to access some element

    int xyz[3]={1,2,3};
    int (*abc)[3]=&xyz; //array pointer
    cout<<abc<<" "<<xyz<<endl;
    cout<<*abc<<" "<<*xyz<<endl; // stores address of base
    cout<<*abc+1<<endl; // next element address
}