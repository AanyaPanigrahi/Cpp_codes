#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping\n";
    cout<<"a : "<<a<<"\nb : "<<b<<endl;
    return 0;
}