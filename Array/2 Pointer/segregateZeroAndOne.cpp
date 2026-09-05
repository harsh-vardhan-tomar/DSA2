#include<iostream>
using namespace std;

int main(){

    int arr[]={1,0,1,0,1,0};
    int n=6;
    // int count0=0,count1=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0) count0++;
    //     else count1++;
    // }
    // for(int i=0;i<n;i++){
    //     if(i<count0){
    //         arr[i]=0;
    //     }
    //     else{
    //         arr[i]=1;
    //     }
    // }
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}