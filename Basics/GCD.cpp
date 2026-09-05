#include<iostream>
using namespace std;

int main(){

    // GCD BY Euclid Algorithm

    int n1=12,n2=18;
    int rem;
    while(n2!=0){
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    cout<<"GCD : "<<n1;


    

}