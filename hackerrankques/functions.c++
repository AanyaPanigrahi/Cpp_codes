#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int w, int x, int y, int z){
        int gr;
        if(w>=x && w>=y && w>=z){
            gr=w;
        }
        else if(x>=w && x>=y && x>=z){
            gr=x;
        }
        else if(y>=x && y>=w && y>=z){
            gr=y;
        }
        else{
            gr=z;
        }
        return gr;
    }
int main() {
    
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
