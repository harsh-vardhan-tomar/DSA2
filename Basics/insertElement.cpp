#include<iostream>
using namespace std;

int main(){
    int arr[6]={11,22,33,44,55};
    int n=5;
    int pos=2;
    int key=12;
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    
    arr[pos]=key;
    n=n+1;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}