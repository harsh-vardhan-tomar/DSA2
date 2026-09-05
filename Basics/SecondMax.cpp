#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[]={3,5,67,12,55,23,14,9};
    int n=8;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;

    int secMax=INT_MIN;
    for(int i=0;i<n;i++){
        if(secMax<arr[i] && arr[i]!=max){
            secMax=arr[i];
        }
    }
    cout<<secMax<<endl;

}