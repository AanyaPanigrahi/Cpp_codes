#include <iostream>
using namespace std;
int main(){
    //print loop until user enters a negative number
    while(true){
        int n;
        cin>>n;
        if(n>=0){
           cout<<"yes"<<endl;
        }
        else{
           break;
        }
    }

    //print first multiple of 5 i.e. also multiple of 7
    int i=5;
    while(true){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
        i+=5;
    }
    for(int j=5;;j+=5){
        if(j%7==0){
            cout<<j<<endl;
            break;
        }
    }

    //using break in nested loops
    //it will only terminate the loop in which it's used
    
    //do-while loop
    //runs atleast once
    do{
        cout<<"yes"<<endl;
    }while(false);
    //will print yes once then terminate unlike simple while loop

    //sum of 10 integers using do while
    int s=1;
    int summ=0;
    do{
        summ+=s;
        s+=1;
    }while(s<=10);
    cout<<summ<<endl;

    //continue keyword to skip
    int a=0;
    while(a<6){
        if(a==3){
            a++;
            continue;
        }
        cout<<a<<endl;
        a++;
    }

    //1 to 20 except multiples of 3
    int b=1;
    while(b<=20){
        if(b%3==0){
            b++;
            continue;
        }
        cout<<b<<endl;
        b++;
    }

    /* using for loop

    for(int b=1;b<=20;b++){
        if(b%3==0){
            continue;
        }
        cout<<b<endl;
    }

    break to terminate loop
    continue to skip an iteration step

    */

   for(int c=1;c<5;c++){
    cout<<c<<",";
   }

   //output 1,2,3,4,

   return 0;
}