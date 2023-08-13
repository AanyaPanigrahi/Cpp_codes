#include <iostream>
#include <vector> //to access vectors
using namespace std;

int main(){

    //vec dynamic arrays -> contiguous memory
    //allows to resize i.e. insert/delete

    //declaration
    //vector <datatype> name;   (size optional)
    vector <int> vec(5);

    vector <int> v;
    cout<<"size : "<<v.size()<<endl; //0
    cout<<"capacity : "<<v.capacity()<<endl; //0

    v.push_back(1);
    cout<<"size : "<<v.size()<<endl; //1
    cout<<"capacity : "<<v.capacity()<<endl; //1

    v.push_back(2);
    cout<<"size : "<<v.size()<<endl; //2
    cout<<"capacity : "<<v.capacity()<<endl; //2

    v.push_back(3);
    cout<<"size : "<<v.size()<<endl; //3
    cout<<"capacity : "<<v.capacity()<<endl; //4

    v.push_back(4);
    v.push_back(5);
    cout<<"size : "<<v.size()<<endl; //5
    cout<<"capacity : "<<v.capacity()<<endl; //8
    //capacity increases in power of 2 for push_back

    v.resize(10);
    cout<<"size : "<<v.size()<<endl; //10
    cout<<"capacity : "<<v.capacity()<<endl; //10
    //capacity increases based on compiler for resize

    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"size : "<<v.size()<<endl; //7
    cout<<"capacity : "<<v.capacity()<<endl; //10

    return 0;
    
}