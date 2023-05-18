#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a=20;
    cout<<a<<" ";
    for(int i=1;i<x;i++){
        int temp =40 +4*(i-1);
        a= a+temp;
        cout<<a<<" ";


    }
    return 0;
}