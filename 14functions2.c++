#include <iostream>
#include <cmath>
using namespace std;

//to define the defined func after main
//declare prototype before or it'll throw error

//formal parameters
int mul(int a, int b);

int main(){

    cout<<mul(2,3)<<endl;

    //power & squareroot - std lib cmath

    cout<<pow(3,4)<<endl; //3^4
    //actual parameters
    cout<<sqrt(49)<<endl; 

    cout<<sqrt(35)<<endl; //5.91...
    //input & return type of sqrt = double

    //or store in diff datatype
    int res=sqrt(35);
    cout<<res<<endl; //5

    return 0;
}

int mul(int a, int b){
    int res = a*b;
    return res;
}
