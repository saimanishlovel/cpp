#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    for(int i=1;i<100;i++){
        if(i%2==0){
            if(i%5==0){
               if(i%3==0){
                    if(i%4==0){
                      cout<<"All positions change in year"<<x<<endl;
                      if(x+i<y){
                      cout<<"All positions change in year"<<x+i<<endl;
                      break;        }
                    }
               }
            }
        }
    }
    return 0;
}