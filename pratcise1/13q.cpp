#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int q=a/8;
    int r=a%8;
    if(r==1){
        cout<<a+3<<"LB";
    }
    if(r==4){
        cout<<a-3<<"LB";
    }
    if(r==2){
        cout<<a+3<<"MB";
    }if(r==5){
        cout<<a-3<<"MB";
    }
    if(r==3){
        cout<<a+3<<"UB";
    }
    if(r==6){
        cout<<a-3<<"UB";
    }
    if(r==7){
        cout<<a+1<<"SL";
    }
    if(r==0){
        cout<<a-1<<"SU";
    }
    
    
    return 0;
}