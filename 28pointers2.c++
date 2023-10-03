#include <iostream>
using namespace std;

//call by value
void swap(int x, int y){
    int temp=x;
    x=y;
    y=temp;
}
//call by reference using pointers
void swapp(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void FirstandLast(string s, char ch, int *first, int *last){
    for(int i=0; i<s.size(); i++){
        if(s[i]==ch){
            *first=i;
            break;
        }
    }
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]==ch){
            *last=i;
            break;
        }
    }
}

int main(){
    int x=2;
    int y=4;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    //no updation, pointing diff memory spaces
    int *ptrx=&x;
    int *ptry=&y;
    swapp(ptrx,ptry); //or swapp(&x,&y);
    cout<<x<<" "<<y<<endl;
    //value swapped

    string s="aanyapanigrahi";
    char ch='a';
    int first,last;
    int *pf=&first;
    int *pl=&last;
    FirstandLast(s,ch,pf,pl);
    cout<<*pf<<" "<<*pl<<endl;
    cout<<first<<" "<<last<<endl;
}