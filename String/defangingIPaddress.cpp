#include<iostream>
using namespace std;

int main(){
    string address="1.1.1.1";
    string ans="";
    for(int i=0;i<address.length();i++){
        if(address[i]=='.'){
            ans+="[.]";
        }
        else{
            ans+=address[i];
        }
    }
    cout<<ans;
}