#include <iostream>
using namespace std;
int main(){

    //WILD POINTER
    int x;
    //declaration but not initialisation -> garbage value
    int *wptr; //dec. but not defining it
    cout<<wptr<<" "<<*wptr<<endl;
    //points to random memory location
    //garbage value on dereferencing

    //segmentation fault related to memory causes
    
    //NULL POINTER
    int *nptr=NULL;
    int *nuptr=NULL;
    //just declaring but will be initialised later
    cout<<nptr<<" "<<nuptr<<endl; //same address -> 0
    //cout<<*nptr;
    //runtime error on dereferencing (not compile time)

    //ascii value of null is 0 so we can use following
    int *nptr1=NULL;
    int *nptr2=0;
    int *nptr3='\0';
    cout<<nptr1<<" "<<nptr2<<" "<<nptr3<<endl; //0 0 0

    //DANGLING POINTER
    //points to non valid (now) memory location 
    int *dptr=NULL;
    {
        int r=4;
        dptr=&r;
    }
    cout<<dptr<<endl; //r not valid out of scope
    //points non valid memory location

    //VOID POINTER
    //special ptr -> can point any datatype value
    int y=8;
    float z=8.2;
    void *vptr=&y; //storing int
    vptr=&z; //storing float
    //cannot directly deref. *vptr; ->compile time error

    //to resolve this we can use typecasting
    float *fptr=(float *)vptr;
    cout<<fptr<<" "<<*fptr<<endl;


    return 0;
    
}