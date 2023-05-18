#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a1=5,c1=2,s1=3;
    int a,c=0,s,x,t;
    cin>>x>>t;
    c=(t-50)/13;
    a=c+x;
    s=2*c;
    cout<<"Number of children tickets sold : "<<c<<endl;
    cout<<"Number of adult tickets sold : "<<a<<endl;
    cout<<"Number of senior tickets sold :"<<s<<endl;
    return 0;


}