#include<iostream>
using namespace std;

int main(){
    int n=496;
    int total=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            total=total+i;
        }
    }
    if(total==n){
        cout<<"Perfect Number";
    }
    else{
        cout<<"not a Perfect Number";
    }

}