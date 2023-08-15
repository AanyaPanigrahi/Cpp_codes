#include <iostream>
using namespace std;
int main(){

    /*
    find the total number of pairs in the array
    whose sum is equal to the given value x
    */

   int arr[]={4,3,6,5,1,2};
   int targetsum=7;
   int numpairs=0;
   for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){
        if(arr[i]+arr[j]==targetsum){
            numpairs++;
        }
    }
   }
   cout<<"num of pairs having sum 7 : "<<numpairs;
   cout<<endl;

   //number of triplets having sum=x
   int tripsum=8;
   int triplets=0;
   for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){
        for(int k=j+1;k<6;k++){
            if(arr[i]+arr[j]+arr[k]==tripsum){
                triplets++;
            }
        }
    }
   }
   cout<<"num of triplets having sum 8 : "<<triplets;
   cout<<endl;

   /*
   unique num in array where all rest elements are repeated
   twice with one value being unique (once) -> all +ve
   */

   int arri[]={1,2,3,4,5,3,2,1};
   int size=8;
   //using array manipulation
   for(int i=0;i<size;i++){
    for(int j=i+1; j<size; j++){
        if(arri[i]==arri[j]){
            arri[i]=arri[j]=-1;
        }
    }
   }
   for(int k=0; k<size; k++){
    if(arri[k]>0){
        cout<<arri[k]<<" ";
    }
   }

   return 0;

}