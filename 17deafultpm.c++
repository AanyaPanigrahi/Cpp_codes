#include <iostream>
using namespace std;

void defaultpm(int x, int y=2, int z=3){
    //dpm to be placed rightmost i.e at end
    cout<<x+y+z<<endl;
}

int main(){

    defaultpm(5); //5+2+3
    defaultpm(5,5); //5+5+3
    defaultpm(5,5,5); //5+5+5

}