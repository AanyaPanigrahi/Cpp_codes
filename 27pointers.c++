//POINTERS
//datatype *pname
//address-of operator -> ampersand &
//pointers can store address

#include <iostream>
using namespace std;
int main(){
    int x=10;
    int* ptr=&x;
    float y=2.3;
    float* ptr2=&y;

    int* ptr3; //only declaring
    cout<<ptr3<<endl;
    int z=10;
    ptr3=&z; //reassign/update
    cout<<ptr3<<endl;

    int q=4;
    int *ptrq=&q;
    cout<<ptrq<<endl; //address
    cout<<q<<endl;
    //dereference operator (*)
    cout<<*ptrq<<endl; //value at address
    q++;
    cout<<ptrq<<endl; //points to the same memory address
    cout<<q<<endl; //value update
    cout<<*ptrq<<endl; //also updated

    int a,b;
    cin>>a>>b;
    int *ptra=&a;
    int *ptrb=&b;
    int sum;
    int *ptrs=&sum;
    *ptrs=*ptra+*ptrb;
    cout<<a<<" "<<*ptra<<endl;
    cout<<b<<" "<<*ptrb<<endl;
    cout<<sum<<" "<<*ptrs<<endl;

    int u=1;
    int v=2;
    int *ptru=&u;
    //ptru=1 wrong, ptru would store address
    //*ptru=&u wrong, *ptru would store int value
    cout<<ptru<<" "<<&u<<endl; //address of value bucket its pointing to
    cout<<&ptru<<endl; //address of ptr itself
}