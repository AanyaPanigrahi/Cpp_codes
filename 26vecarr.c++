#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){

    //rotating array using reverse method (vector)
    //12345, ans 45123 for k=2
    //12345 rev 54321, rev (54), (321)= 45123

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int k=2;
    k=k%v.size(); //when greater than size
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //tough ques (element present in array or not)
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    const int N= 1e5 + 10; //10^5
    vector<int> freq(N,0); //N size, initialising all elements 0
    for(int i=0;i<n;i++){
        freq[vec[i]]++;
    }

    cout<<"enter queries : ";
    int q;
    cin>>q;
    while(q--){
        int queryelem;
        cin>>queryelem;
        cout<<"it is present "<<freq[queryelem]<<" times\n";
    }

}