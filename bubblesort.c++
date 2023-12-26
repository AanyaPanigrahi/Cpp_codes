#include <iostream>
using namespace std;
int main(){
    int arr[]={5,2,4,1,3};
    int n=5;
    //rounds of comparison and swap
    for(int i=0;i<n-1;i++){
        //compare and swap for each round
        for(int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int k=0; k<n; k++){
        cout<<arr[k];
    }
}