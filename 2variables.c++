#include <iostream>
using namespace std;
int main(){
    
    // int a=5;
    // char alpha='a';
    // bool flag=true; or false
    // float rate=5.67;
    // string name="aanya";

    // to take input use cin >>

    int apples;
    cin >> apples;
    cout<<"number of apples : "<<apples<<endl;

    return 0;
}

//how to access global var when similarly named local var exists
//as local is preferred over global

//scope resolution operator ::

/*

int age = 18;
int main()
{
    int age = 19;
{
    printf("global age = %d\n", ::age);
}
cout<<age;
    return 0;
}

*/
