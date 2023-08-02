#include <iostream>
using namespace std;
int main(){

    /*

    pattern 1
    ****
    ****
    ****

    */

    int a,b;
    cout<<"rows : ";
    cin>>a;
    cout<<"column : ";
    cin>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<"*";
        }
        cout<<endl;

    }

    /*
    
    pattern 2
    ******
    *    *
    *    *
    ******
     
    */

   int l,w;
   cout<<"length : ";
   cin>>l;
   cout<<"width : ";
   cin>>w;
   //cin>>l>>w;
   for(int i=1;i<=w;i++){
    if(i==1 || i==w){
        for(int j=1;j<=l;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    else{
        cout<<"*";
        for(int k=2;k<l;k++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
   }

   //easier way to code

   /*

   for(int i=1;i<=w;i++){
    for(int j=1;j<=l;j++){
        if(i==1 || j==1 || i==w || j==l){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
   }

    pattern 3
    *
    **
    ***
    ****

    */
    int p;
    cout<<"rows : ";
    cin>>p;
    for(int i=1;i<=p;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
    
    pattern 4
    *****
    ****
    ***
    **
    *
    
    */
    
    int q;
    cout<<"enter : ";
    cin>>q;
    for(int i=q; i>=1; i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
    
    pattern 5
       *   
      ***
     *****
    *******
    
    */

   int s;
   cout<<"pattern 5 : ";
   cin>>s;
   for(int i=1; i<=s; i++){
     for(int j=1;j<=s-i;j++){
        cout<<" ";
     }
     for(int k=1;k<2*i;k++){
        cout<<"*";
     }
     cout<<endl;
   }

   /*
   
   pattern 6
   12345
   23451
   34512
   45123
   51234
   
   */

   int f;
   cout<<"enter count : ";
   cin>>f;
   for(int i=1;i<=f;i++){
    for(int j=i;j<=f;j++){
        cout<<j;
    }
    for(int k=1;k<=i-1;k++){
        cout<<k;
    }
    cout<<endl;
   }

   /*
   
   pattern 7
   12345
   1   5
   1   5
   1   5
   12345
   
   */

   int g;
   cout<<"input : ";
   cin>>g;
   for(int i=1;i<=g;i++){
    for(int j=1;j<=g;j++){
        if( i==1 || j==1 || j==g || i==g){
            cout<<j;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
   }

   /*
   
   pattern 8
   121212
   212121
   121212
   212121
   
   */
   int n,m;
   cout<<"enter row and column : ";
   cin>>n>>m;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if((i+j)%2==0){
            cout<<"1";
        }
        else{
            cout<<"2";
        }
    }
    cout<<endl;
   }

   /*
   
   pattern9
   1
   12
   123
   1234
   
   */

   int x;
   cout<<"x : ";
   cin>>x;
   for(int i=1;i<=x;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
   }

   /*
   
   pattern 10
      1
     121
    12321
   1234321
   
   */
   
   int y;
   cout<<"y : ";
   cin>>y;
   for(int i=1;i<=y;i++){
    for(int j=1; j<=(y-i);j++){
        cout<<" ";
    }
    for(int k=1;k<=i;k++){
        cout<<k;
    }
    for(int q=i-1;q>=1;q--){
        cout<<q;
    }
    cout<<endl;
   }

   /*
   
   pattern 11
      1
     2 2
    3   3
   4444444
   
   */

   int o;
   cout<<"o : ";
   cin>>o;
   for(int i=0; i<o; i++){
    for(int j=1;j<o-i;j++){
        cout<<" ";
    }
    for(int k=0;k<2*i+1;k++){
        if (i==0 || i==o-1 || k==0 || k==2*i){
            cout<<i+1;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;

   }

   /*
   
   pattern 12
   *********
   **** ****
   ***   ***
   **     **
   *       *  
   
   */

   int t;
   cout<<"t : ";
   cin>>t;
   int space=1;
   for(int i=t;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    if(i!=t){
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        space+=2;
    }
    for(int q=i;q>=1;q--){
        if(q!=t){
            cout<<"*";
        }
    }
    cout<<endl;
   }

    /*

    pattern 13
    1234554321
    1234**4321
    123****321
    12******21
    1********1
    
    */

   int n=5;
   int star=2;
   for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    if(i!=n){
        for(int k=1;k<=star;k++){
            cout<<'*';
        }
        star+=2;
    }
    for(int q=i;q>=1;q--){
        cout<<q;
    }
    cout<<endl;
   }

    
   return 0;
}
