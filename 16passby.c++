#include<iostream>
using namespace std;

void zee(int z){
    z=100;
}

void zoo(int &x){
    x=100;
}

int main(){

    //pass by value
    //variable value is copied
    
    int a=10;
    zee(a);
    cout<<a<<endl; //10

    //pass by reference
    //variable itself is passed

    zoo(a); //&z=a
    cout<<a<<endl; //100

    int u=21;
    int &v=u;
    //ampersand(&) = same memory location
    v++; //u will change
    cout<<u<<endl; //22

    //printing mem. loc.
    cout<<&u<<endl; //xx
    cout<<&v<<endl; //xx
}
