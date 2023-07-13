//local & global var
#include <iostream>
using namespace std;
int a=2;

void ayy(){

    cout<<a<<endl; //2 global

}

int main(){

    int a=4;
    cout<<a<<endl; //4 local
    a--;
    cout<<a<<endl; //3 local > global
    ayy(); //2

    //scope resolution
    cout<<::a<<endl; //2 global
    ::a++; //3
    cout<<::a<<endl;
}
