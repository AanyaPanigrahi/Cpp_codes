#include <iostream>
using namespace std;

    //index of second largest element in array

int LargestElemIdx(int array[],int size){
    int max=INT16_MIN;
    int maxIdx=-1;
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
            maxIdx=i;
        }
    }
    return maxIdx;
}

int main(){
    int array[]={1,4,2,6,8,5};
    int size=6;
    int LargestElemIdx1=LargestElemIdx(array,6);
    array[LargestElemIdx1]=-1;
    int LargestElemIdx2=LargestElemIdx(array,6);
    cout<<"index of second largest elem : "<<LargestElemIdx2<<endl;
    cout<<"second largest element : "<<array[LargestElemIdx2]<<endl;

    //Rotating a given array k times
    int arey[]={1,2,3,4,5};
    int n=5; //size
    int ansarey[n];
    int k=3;
    //for k>n, k=k%n (n times rotation returns original)
    int j=0;
    for(int i=n-k; i<n; i++){
        ansarey[j]=arey[i];
        j++;
    }
    for(int q=0; q<=k; q++){
        ansarey[j]=arey[q];
        j++;
    }
    for(int z=0;z<n;z++){
        cout<<ansarey[z];
    }
}