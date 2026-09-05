#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={3,5,67,12,55,23,14,9};
    int n=8;
    int min1=INT_MAX;
    for(int i=0;i<n;i++){
        if(min1>arr[i]){
            min1=arr[i];
        }
    }
    cout<<min1<<endl;

    int secMin=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]!=min1){
            secMin=min(secMin,arr[i]);
        }
    }
    cout<<secMin<<endl;

}