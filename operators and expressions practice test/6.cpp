#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    double total;
    double brand,travel,food,logis;
    cin>>brand>>travel>>food>>logis;
    total=brand+travel+food+logis;
    cout<<"Total expanses : Rs."<<fixed<<setprecision(2)<<total<<endl;
    cout<<"Branding expenses percentage : "<<fixed<<setprecision(2)<<(brand/total)*100<<"%"<<endl;
    cout<<"Travel expenses percentage : "<<fixed<<setprecision(2)<<(travel/total)*100<<"%"<<endl;
    cout<<"Food expenses percentage : "<<fixed<<setprecision(2)<<(food/total)*100<<"%"<<endl;
    cout<<"Logistics expenses percentage : "<<fixed<<setprecision(2)<<(logis/total)*100<<"%"<<endl;
}