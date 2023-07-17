#include <iostream>
using namespace std;
int main(){

    //declaration 
    //datatype name[size]
    //int array[4];
    //ini. + dec. no need to specify size
    int arr[]={1,2,3,4,5};
    cout<<sizeof(arr)<<endl; //5*4
    int numsize = sizeof(arr)/sizeof(arr[0]);
    cout<<"size / number of elements : "<<numsize<<endl; //20/4

    //to access elements
    //for loop
    for(int idx=0;idx<numsize;idx++){
        cout<<arr[idx]<<endl;
    }


    //while loop
    int idx=0;
    while(idx<numsize){
        cout<<arr[idx]<<endl;
        idx++;
    }


    //for each loop
    //for(datatype var:array){}
    for(int elm:arr){
        cout<<elm<<endl;
    }
    }