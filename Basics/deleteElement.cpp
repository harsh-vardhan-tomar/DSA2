#include<iostream>
using namespace std;

int main(){
    int arr[]={11,22,33,44,55};
    int n=5;
    int pos=2;
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}