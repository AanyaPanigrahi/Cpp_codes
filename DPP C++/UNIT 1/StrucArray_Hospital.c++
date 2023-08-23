#include <iostream>
using namespace std;

struct patient{
    int pid;
    int pgender; //1 M , 2 F
    int page;
};

void print_gender(patient p[], int n);
void print_age(patient p[], int n);

int main(){
    int n;
    cin>>n;
    patient p[n];
    for (int i=0; i<n ; i++){
        cin>>p[i].pid>>p[i].pgender>>p[i].page;
    }
    print_gender(p,n);
    print_age(p,n);
    return 0;
}

void print_gender(patient p[], int n){
    int male=0,female=0;
    for(int j=0; j<n; j++){
        if(p[j].pgender==1){
            male++;
        }
        else{
            female++;
        }
    }
    cout<<male<<" "<<female<<endl;
}

void print_age(patient p[], int n){
    int count=0;
    for(int k=0; k<n; k++){
        if(p[k].page>40){
            count++;
        }
        else{
            continue;
        }
    }
    cout<<count;
}
