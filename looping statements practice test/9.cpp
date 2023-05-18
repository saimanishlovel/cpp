#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a;
    cin>>a; 
    long long int b = a;
    int even = 0, odd = 0;
    while(a>0){
        int temp=a%10;
        a=a/10;
        // cout<<a<<endl;
        if(temp%2==0){
             even=even+temp;
         }
        else{
            odd=odd+temp;
        }
    }
    cout << b << endl;
    cout<<even<<endl;
    cout<<odd<<endl;
}