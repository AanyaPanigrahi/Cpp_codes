#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    int org=num;
    int dig=0;
    while(org>0){
        dig++;
        org/=10;
    }
    org=num;
    cout<<dig<<endl;
    int res=0;
    while(org>0){
        int lastdig=org%10;
        res=res+round(pow(lastdig,dig));
        org/=10;
    }
    if(num==res){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no";
    }
    return 0;
}