#include<iostream>
using namespace std;

int main(){

    int a=0,b=1;
    int n=8;
    cout<<a<<endl;
    cout<<b<<endl;
    int c;
    for(int i=2;i<n;i++){
        c=a+b;
       cout<<c<<endl;
        a=b;
        b=c;   
    }
}