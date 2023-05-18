#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    int count=0;
    for(int j=1;j<=n;j++){
        if(n%j==0){
            count=count+1;
        }    
        }
        if(count==2){
            return true;
        }
    return false;
}

int main(){
    int a;
    cin>>a;
    
    int n = 1;
    while (a != 0) {
        if (isPrime(n)) {
            cout << n << endl;
            a--;
        }
        
        n++;

    }
}