#include <iostream>
using namespace std;
int main(){

    //sum of array elements
    int arr[]={5,4,7,13,4};
    int sum=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int idx=0;idx<size;idx++){
        sum+=arr[idx];
    }
    cout<<sum<<endl;

    //greatest array element
    int array[]={2,10,4,13,5,7};
    int max=array[0];
    int sizee=sizeof(array)/sizeof(array[0]);
    for(int i=0; i<sizee; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;

    //element search ex:3
    //return element index if present in array else -1
    int arey[]={1,2,3,4,5};
    int ans=-1;
    for(int i=0;i<5;i++){
        if(arey[i]==6){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}