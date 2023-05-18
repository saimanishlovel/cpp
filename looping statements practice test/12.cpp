#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
     int b;
    cin>>a;
    for(int i=0;i<1;i++){
if(a<10){
         cout<<"Invalid input";
         break;
    }
      b=a%10;
    while(a>10){
       
        a=a/10;

    }
    if(b>a){
        cout<<b-a;

    }
    else{
        cout<<a-b;
    }
    return 0;
    }
    
}