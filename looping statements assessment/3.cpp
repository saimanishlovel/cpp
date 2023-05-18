#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    int value =a;
    int value1 =b;
    if(n<=0){
        cout<< "Invalid input";
    }
    else{
    for(int i=0;i<n;i++){
        if(i%2==0){
       
       value =value *2;
    //    cout<< value << " ";
        }
        if(i%2==1){
           value1 =  value1*2;
        //    cout<< value1<< " ";
        }

    }
    cout<< value +value1 <<" ";
    }
} 