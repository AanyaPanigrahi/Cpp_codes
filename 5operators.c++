#include <iostream>
using namespace std;
int main(){
    //arithmetic -> valued
    // + - / * %
    int num1=6;
    int num2=3;
    cout<<num1 + num2<<endl;
    cout<<num1 - num2<<endl;
    cout<<num1 * num2<<endl;
    cout<<num1 / num2<<endl;
    cout<<num1 % num2<<endl;

    //relational -> 0/1
    // == < > <= >= !=
    cout<<(num1 == num2)<<endl;
    cout<<(num1 != num2)<<endl;
    cout<<(num1 >= num2)<<endl;
    cout<<(num1 <= num2)<<endl;

    //logical -> 1/0
    // && ! ||
    bool exp1=true;
    bool exp2=false;
    cout<<(exp1&&exp2)<<endl; // 0 F
    cout<<(exp1||exp2)<<endl; // 1 T
    cout<<(!exp1)<<endl; // 0 F

    //assignment operators
    // = += -= /= *=
    int q=5;
    q+=2; //q=q+2, 7
    cout<<"q : "<<q<<endl;
    int p=9;
    p-=3; //p=p-3, 6
    cout<<"p : "<<p<<endl;

    //bitwise operators
    // ~ << >>
    int z=6; //0110
    cout<<(z<<2)<<endl; //6*4=24
    cout<<(z>>1)<<endl; //6/2=3
    int y=5; //0101
    cout<<(z&y)<<endl; //0100 i.e. 4
    cout<<(z|y)<<endl; //0111 i.e. 7

    //miscellaneous operators
    int r=4;
    cout<<(sizeof(r))<<endl;
    char first='n';
    cout<<sizeof(first)<<endl;

    bool flag;
    r==first?flag=true:flag=false;
    cout<<flag<<endl; //0

    cout<<(&r)<<endl;

    //post and pre increment
    int a=4;
    cout<<a++<<endl; //4 printed
    //a->5
    cout<<++a<<endl; //5+1=6

    int b=7;
    cout<<b--<<endl; //7 print then 6
    cout<<--b<<endl; //6-1=5

    //precendence and associativity
    //addition - L to R
    // cout<<(4+2+"pqr")<<endl; //4+2 then + pqr so 6pqr
    // cout<<("pqr"+4+2)<<endl; //pqr+4 then + 2 so pqr42

    //ques
    bool s=false;
    bool t=false;
    bool u=true;
    cout<<(s==t==u)<<endl; //true L to R
    // cause false==false is true & true==true is true

    return 0;
}