#include <iostream>
using namespace std;
int main(){

    // WHILE LOOP
    /*
    while(condition){
        //code
    }
    */

    //1 to 10
    int i=1;
    while(i<=10){
        cout<<i<<endl;
        i+=1; //i=i+1 or i++
    }
    //i is loop variable, it won't work after loop
    
    int n;
    cout<<"enter n : ";
    cin>>n;
    int total=0;

    //new variable p initialisation for sum loop
    int p=1;
    while(p<=n){  //condition
        total+=p;
        p+=1; //update
    }   
    cout<<total<<endl;

    // FOR LOOP
    /*
    for(initiate ; cond/terminate ; pattern){
        //code
    }
    */

    //odd numbers
    for(int q=1; q<=n; q++){
      if(q%2!=0){
          cout<<q<<endl;
      }
    }
    //can initialise before loop, terminate & provide pattern within code
    int z=1;
    for(;;){
        if (z<6){
            cout<<z<<endl;
            z++;
        }
        else{
            break;
        }
    }

    //case of two or more variables
    //for(int i=2,z=12; i<6,z>9; i++,z--)

    return 0;
}