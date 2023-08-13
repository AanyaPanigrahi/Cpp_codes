#include <iostream>
using namespace std;
#include <vector>
int main(){

    //for loop

    vector <int> v;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        //if size specified i.e. vector <int> v(5);
        //cin>>v[i] index way can be used
        v.push_back(element);
    }

    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }

    v.insert(v.begin()+3,8);
    cout<<endl;

    //for each loop
    for(int elem:v){
        cout<<elem<<" ";
    }

    v.erase(v.end()-2);
    cout<<endl;

    //while loop
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx]<<" ";
        idx++;
    }
    /*
    solved sumOfEven - sumOfOdd using vectors, never felt so good

    vector<int> v(7);

    // taking inpuut in vector
    for (int i = 0; i < v.size(); i++) {
        cout << "v: ";
        cin >> v[i];
    }
    cout << endl;

    // printing out vector
    cout << "vector: ";
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;

    // loop to add elements at even indices
    int sumOfEven = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i % 2 == 0) {
            sumOfEven += v[i];
        }
    }

    // loop to add elements at odd indices
    int sumOfOdd = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i % 2 != 0) {
            sumOfOdd += v[i];
        }
    }

    // subtracting sumOfEven - sumOfOdd
    int ans = sumOfEven - sumOfOdd;
    cout << "ans: " << ans;
    */

}