#include <iostream>
using namespace std;
int main(){

    int p,q;

    cout<<"first bin num : ";
    cin>>p;
    int pp=0;
    int pow=1;
    while(p>0){
        int lastdig = p%10;
        pp+=lastdig*pow;
        pow*=2;
        p/=10;
    }

    cout<<"second bin num : ";
    cin>>q;
    int qq=0;
    int power=1;
    while(q>0){
        int enddigit = q%10;
        qq+=enddigit*power;
        power*=2;
        q/=10;
    }

    if(pp > qq)
    cout<<pp;
    else
    cout<<qq;
    
}