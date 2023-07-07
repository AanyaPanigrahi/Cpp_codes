#include <iostream>
using namespace std;
int main(){

    // binary to decimal
    
    int n;
    cout<<"binary num : ";
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int lastdigit = n%10;
        ans += lastdigit*power;
        power*=2;
        n/=10;
    }
    cout<<"decimal num : "<<ans<<endl;

    // decimal to binary
    
    int m;
    cout<<"decimal num : ";
    cin>>m;
    int answer=0;
    int pow=1;
    while(m>0){
        int paritydigit = m%2;
        answer+=paritydigit*pow;
        pow*=10;
        m/=2;
    }
    cout<<"binary num : "<<answer<<endl;

    return 0;

}