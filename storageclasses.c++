#include <iostream>
using namespace std;

int staticvaruse(){
    static int x=100; //this runs only once
    x=x+100; //last value is preserved
    return x;
}

int nonstaticvaruse(){
    int x=10;
    x=x+10;
    return x;
}

int main(){

    cout<<"for staticvar case : "<<endl;
    cout<<staticvaruse()<<endl; //200
    cout<<staticvaruse()<<endl; //300
    cout<<staticvaruse()<<endl; //400

    cout<<"for nonstaticvar case : "<<endl;
    cout<<nonstaticvaruse()<<endl; //20
    cout<<nonstaticvaruse()<<endl; //20
    cout<<nonstaticvaruse()<<endl; //20
}