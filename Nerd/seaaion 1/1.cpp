#include <iostream>
#include <array>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a; cin >> a;
    vector <int> b(a);
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    bool found = false;
    int j = 0;
    int ticket_no;
    cin>>ticket_no;
    for(j;j<a;j++){
        if(b[j]==ticket_no){
            found = true;
            break;       
        }  
    }

    if (found) {
         cout<<"The ticket number "<<ticket_no<<" is found at position "<< j<<endl; 
        cout<<"Congratulations!You have won the lottery "<<endl;
    } else {
        cout<<"Sorry the ticket number "<<ticket_no <<" is not there.Better luck next time!"<<endl;
    }

    return 0;
}