#include <iostream>
using namespace std;
 int  main(){
    int a;
    cin>>a;
    int b=a-2001;
    int val=(b*365)%10;
    if(val==0){
        cout<<"Monday";
    }
    if(val==1){
        cout<<"Tuesday";
    }
    if(val==2){
        cout<<"Wednesday";
    }
    if(val==3){
        cout<<"Thursday";
    }
    if(val==4){
        cout<<"Friday";
    }
    if(val==5){
        cout<<"Saturday";
    }
    if(val==6){
        cout<<"Sunday";
    }
    return 0;
 }