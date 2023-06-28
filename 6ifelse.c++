// conditional statements
#include <iostream>
using namespace std;
int main(){
    // if
    if(5>4){
       //code - when T
       cout<<"true"<<endl;
    } 
    // else nothing to be printed

    // if-else
    // odd even
    int num;
    cout<<"enter a number : ";
    cin>>num;
    if(num%2==0){
        cout<<"even"<<endl;
    } else{
        cout<<"odd"<<endl;
    }

    //if-else-if
    int marks;
    cout<<"enter marks : ";
    cin>>marks;
    if(marks>90){
        cout<<"A"<<endl;
    }
    else if (marks<90 && marks>70){
        cout<<"B"<<endl;
    }
    else{
        cout<<"C"<<endl;
    }

    //nested or ladder if else
    if(num>0){
        cout<<"positive"<<endl;
        if(num%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }
    else{
        cout<<"negative"<<endl;
    }

    //ternary -> short version of if else
    //condition?exp1:exp2;
    //T exp1, F exp2
    marks>90?cout<<"A":cout<<"not A"<<endl;

    //can use logical and && , logical or ||
    int yolo;
    cout<<"enter yolo : ";
    cin>>yolo;
    if(yolo>3 && yolo>8){
        cout<<"greater"<<endl;
    }
    if(yolo%2==0 || yolo%3==0){
        cout<<"yass"<<endl;
    }
    //for && if 1st condition is false, 2nd isn't checked
    //for || if 1st condition is true, 2nd isn't checked

    return 0;
}