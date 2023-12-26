//pointer arithmetic
#include <iostream>
using namespace std;

int main(){
    int a=2;
    double b=2.2;
    int *pa=&a;
    double *pb=&b;
    cout<<pa<<" ";
    //increment->right shift in memory location
    cout<<(pa+1)<<" ";
    //decrement->left shift in memory location
    cout<<(pa-1)<<endl;
    //shifting depends on size of ptr var(datatype)
    cout<<"size of int "<<sizeof(a)<<endl;

    cout<<pb<<" "<<(pb+1)<<" "<<(pb-1)<<endl;
    cout<<"size of double "<<sizeof(b)<<endl;

    cout<<pa<<" "<<(pa+2)<<" "<<(pa-3)<<endl;

    int arr[2]={3,7};
    int* ptrarr=&arr[0];
    cout<<ptrarr<<" "<<*ptrarr<<endl;
    cout<<ptrarr+1<<" "<<*(ptrarr+1)<<endl;

    cout<<(*ptrarr)++<<endl; //paranthesis first
    //dereferencing then increment of value
    cout<<arr[0]<<" "<<arr[1]<<endl; 

    cout<<ptrarr<<" "<<*ptrarr<<endl;
    cout<<*ptrarr++<<endl;
    //R to L, (ptrarr++) use current address then increment address
    //increment of address
    //*ptrarr, ptrarr++
    cout<<arr[0]<<" "<<arr[1]<<endl;
    cout<<ptrarr<<" "<<*ptrarr<<endl;

    int arey[3]={1,2,3};
    int *ptrarey=&arey[0];
    cout<<*++ptrarey<<endl;
    //increment address then deref -> 2
    cout<<++*ptrarey<<endl;
    //++(2)=3

}