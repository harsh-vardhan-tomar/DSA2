#include<iostream>
using namespace std;

int main(){

    int n1=12,n2=60;
    int hcf;
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            hcf=i;
            break;
        }
    }
    cout<<hcf<<endl;

}