#include <iostream>
using namespace std;
#include <vector>
int main(){

    //last occurence of an element
    vector <int> v(6);
    cout<<"enter vector elements : ";
    for(int i=0; i<6; i++){
        cin>>v[i];
    }

    int x;
    cout<<"enter x: ";
    cin>>x;
    int pos;
    // for(int j=0;j<6;j++){
    //     if(v[j]==x){
    //         pos=j;
    //     }
    // }

    // method 2 accessing from end
    
   for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            pos=i;
            break;
        }
    }

    cout<<"last occurence at : "<<pos<<endl;

    //number of occurences of elem
    int count=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            count++;
        }
    }
    cout<<"occurence count : "<<count<<endl;

    //number of elements strictly greater than x
    int num=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>x){
            num++;
        }
    }
    cout<<"num : "<<num<<endl;

    //sorted or not check (strictly ascending)
    int arr[]={1,2,3,4,5};
    bool sorted=true;
    for(int i=1; i<5; i++){
        if(arr[i]<=arr[i-1]){
            sorted=false;
        }
    }
    cout<<sorted<<endl;
}