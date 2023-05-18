#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int cp = 4700,re = 800,sp = 5800;
    // cin>>cp>>re>>sp;
    float gain=sp-cp-re;
    // cout << gain << endl;
    float per= gain/(cp+re);
    per=per*100.0;//
    
    cout<<(round(per * 100.0) / 100.0) << endl;
    return 0;

}