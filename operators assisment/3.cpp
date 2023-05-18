#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int s,n,temp;
    cin>>s>>n;
    for(int i=2;i<n;i++){
       int  a=n/i;
       int b=n%i;
        if(b==0){
             temp=s*s*a;
        // cout<<temp<<endl;

            break;
           
        }

        
    }
         cout<<"Area of the largest possible square is "<<temp<<"sqcm";
    
    return 0;
   
}