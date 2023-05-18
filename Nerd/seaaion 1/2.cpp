#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector <vector<char>> b(n, vector<char>(m, 0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> b[i][j];
        }
    }

    string a;
    cin>>a;

    // int k=0;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i] << " " << b[i][j] << endl;
            if(a[i]==b[i][j]){
                 count++;
                 break;
            }
        }
    }
    cout << n << endl;
    if(count == n){
        cout<< "1";

    }
    else{
        cout<<"0";
    }
return 0;


}