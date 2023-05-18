#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,c=0,d=0;
    cin>>a;
    vector<int> b(a);
    for(int i=0;i<a;i++){
           cin>>b[i];
    }
    for(int j=0;j<=a;j++){
        if(j%2==0){
            if(b[j]==1){
                cout<<"Player A score4points(s)"<<endl;
                c=c+4;
        }
            if(b[j]==11){
                 cout<<"Player A score1point(s)"<<endl;
                 c=c+1;
        }
            if(b[j]==12){
                 cout<<"Player A score2point(s)"<<endl;
                 c=c+2;
        }
            if(b[j]==13){
                 cout<<"Player A score3point(s)"<<endl;
                 c=c+3;
        
            }
        }
         if(j%2==1){
            if(b[j]==1){
                cout<<"Player B score4points(s)"<<endl;
                d=d+4;
        }
            if(b[j]==11){
                 cout<<"Player B score1points"<<endl;
                 d=d+1;
        }
            if(b[j]==12){
                 cout<<"Player B score2point(s)"<<endl;
                 d=d+2;
        }
            if(b[j]==13){
                 cout<<"Player B score3point(s)"<<endl;
                 d=d+3;
        
            }
        }
    }
    cout<<"Player A:"<<c<<"point(s)"<<endl;
    cout<<"Player B:"<<d<<"point(s)"<<endl;
    return 0;


}