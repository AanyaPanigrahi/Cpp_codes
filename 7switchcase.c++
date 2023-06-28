//switch case
#include <iostream>
using namespace std;
int main(){

    //condition or case in switch can be int or char

    int day;
    cout<<"enter day (1-7) : ";
    cin>>day;

    switch(day){
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"thursday";
        break;
        case 5:
        cout<<"friday";
        break;
        case 6:
        cout<<"saturday";
        break;
        case 7:
        cout<<"sunday";
        break;
        default:
        cout<<"invalid input";
    }

    char alpha;
    cout<<"\nenter char : ";
    cin>>alpha;
    
    switch(alpha){
        case 'a':
        cout<<"vowel"<<endl;
        break;
        case 'e':
        cout<<"vowel"<<endl;
        break;
        case 'i':
        cout<<"vowel"<<endl;
        break;
        case 'o':
        cout<<"vowel"<<endl;
        break;
        case 'u':
        cout<<"vowel"<<endl;
        break;
        default:
        cout<<"consonant"<<endl;
        break;
    }

}