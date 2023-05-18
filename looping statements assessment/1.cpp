#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,d=0,m,c=0,n=0;
    cin>>a;
    vector <int> b(a);
    for(int i=0;i<a;i++)
{
    cin>>b[i];
    c=c+b[i];
}
// cout<<c<<endl;

m=c%3;
// cout<<m<<endl;
if(m==0){
cout<<m<<" ";
}
else{
    c=c-m;
    cout<<m<<" ";
}
// cout<<c<<endl;
n=c/3;
// cout<<n<<endl;
for(int j=0;j<a;j++){
    if(b[j]>n){
        d=d+(b[j]-n);
    }
    
}
   cout<<d-m;
        
   
     

 
return 0;
}