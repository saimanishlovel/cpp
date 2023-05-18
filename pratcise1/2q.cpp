#include <iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    if(age<15||age>60){
        cout<<"Not Allowed";
    }
    else{
        cout<<"Allowed";
    }
    return 0;
}