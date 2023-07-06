#include <iostream>
using namespace std;
int main(){

    // count number of digits
    int num;
    cout<<"C : ";
    cin>>num;
    int count=0;
    while(num>0){
        count++;
        num=num/10;
    }
    cout<<"number of digits : "<<count<<endl;

    // sum of digits
    int numo;
    cout<<"S : ";
    cin>>numo;
    int sum=0;
    while(numo>0){
        sum+=(numo%10);
        numo=numo/10;
    }
    cout<<"sum is : "<<sum<<endl;

    // reverse a number
    int input;
    cout<<"I : ";
    cin>>input;
    int reverse=0;
    while(input>0){
        int lastdigit = input%10;
        reverse = reverse*10 + lastdigit;
        input/=10;
    }
    cout<<"R : "<<reverse<<endl;

    // 1-2+3-4..n series result
    int n;
    cout<<"n : ";
    cin>>n;
    int result=0;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            result+=i;
        }
        else{
            result-=i;
        }
    }
    cout<<"series result : "<<result<<endl;;

    // factorial numbers
    int fact;
    cout<<"fact input : ";
    cin>>fact;
    int output=1;
    for(int i=1; i<=fact; i++){
        if(fact==0 || fact==1){
            output=1;
        }
        else{
            output*=i;
        }
    }
    cout<<"fact output : "<<output<<endl;

    // power of a number
    int q1,p1;
    cout<<"number : ";
    cin>>q1;
    cout<<"raised to power : ";
    cin>>p1;
    int res=1;
    for(int i=1; i<=p1; i++){
        res*=q1;
    }
    cout<<"result : "<<res<<endl;

    return 0;
}