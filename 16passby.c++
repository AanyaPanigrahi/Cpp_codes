#include<iostream>
using namespace std;

void zee(int z){
    z=100;
}

int main(){

    //pass by value
    int a=10;
    zee(a);
    cout<<a<<endl; //10

    //pass by reference
    int u=21;
    int &v=u;
    //ampersand(&) = same memory location
    v++; //u will change
    cout<<u<<endl; //22

    //printing mem. loc.
    cout<<&u<<endl;
    cout<<&v<<endl;
}