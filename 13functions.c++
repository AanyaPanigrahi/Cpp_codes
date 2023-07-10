#include <iostream>
using namespace std;

void hello(){
    cout<<"ehehe heyyllo";
}

int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int add(int a, int b, int c){
    int sum = a + b + c;
    return sum;
}

float add(float q, float p){
    float sum = q + p;
    return sum;
}

int main(){

    hello();
    // cant store in a var cause of no return type (void)

    int res = add(3,4);
    // but for other func of return type valid (int)
    cout<<"\n"<<res<<endl;

    int c=2;
    int d=6;
    cout<<add(c,d)<<endl; //add() 2 pm int
    cout<<add(c,d,2)<<endl; //add() 3 pm int

    float e=3.4;
    float f=5.7;
    cout<<add(e,f)<<endl; //add() 2 pm float

}