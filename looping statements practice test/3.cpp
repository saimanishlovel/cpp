#include <iostream>
using namespace std;
int main(){
    int a,b,coutn = 0,count1 = 0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        coutn = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                coutn = coutn + 1;
            }          
        }
        if(coutn==4){
            count1 = count1 +1;
        }
        
    }

    cout << count1 << endl;
    return 0;
}