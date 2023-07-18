#include <iostream>
using namespace std;
int main(){
    //to take input
    char vowels[5];
    cout<<"enter elements "<<endl;
    for(int idx=0;idx<5;idx++){
        cin>>vowels[idx];
    }
    cout<<"array is : ";
    for(int idx=0;idx<5;idx++){
        cout<<vowels[idx]<<" ";
    }

    char arr[4];
    cout<<"\nenter elements "<<endl;
    for(char &elm: arr){
        cin>>elm;
    }
    cout<<"array 2 is : ";
    for(char elm:arr){
        cout<<elm<<endl;
    }
}