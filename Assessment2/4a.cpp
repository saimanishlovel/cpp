#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    float temp;
    cin>>a;
    if(a<15000){
        float ab=a+(a*15/100.0);
        temp=ab+(ab*90/100.0);
        cout<<float(temp)<<endl;
    }
    else{
        float ab=a+(98*a/100.0);
        temp=ab+5000;
        cout<<fixed;
        cout<<setprecision(2)<<temp;
    }
    return 0;
}