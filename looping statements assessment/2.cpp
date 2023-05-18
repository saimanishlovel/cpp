#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=30,b=35;
     int value =a ;
     int value1 =b;
     int n = 5;
    for(int i=0;i<n;i++){
        
        if(i%2==0){
            int d= 8 * (i/2) ;
           
           value =value +d ; 
           cout << value << " " ;
        }

        else if(i%2==1){

            int d1= 6* (i-1)/2;
            
            value1 = value1 + d1;
            cout<< value1 <<" " ;

        }
    }
    return 0;
}