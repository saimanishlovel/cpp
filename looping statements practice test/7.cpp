#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,temp,d,e=0,f;
    cin >> a;
    vector <int> b(a);
    vector <int> c(a);
    for(int i=0;i<a;i++){
          cin>>c[i];
    }
    for(int i=0;i<a;i++){
        temp=0;
        temp=c[i];
        f=temp+a*i;
        b[i]=temp;
        // cout<<b[i]<<endl;

    }
    for(int j=0;j<a;j++){
        if(b[j]==c[j]){
            // cout << c[j] << endl;
            if(b[j]%2==0){
                d=d+1;
            }
            if(b[j]%2 == 1){
                e=e+1;
                // cout<<e<<endl;
            }
        }
    }
    cout<<d<<endl;
    cout<<e<<endl;
    return 0;
}