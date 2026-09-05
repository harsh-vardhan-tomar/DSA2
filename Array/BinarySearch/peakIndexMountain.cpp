#include<iostream>
using namespace std;

int main(){

    int arr[]={1,6,3,2,1};
    int n=5;
    
    // while(arr[i]<arr[i+1]){ 
    //     ans=i+1;
    //     i++;
    // }
    // cout<<ans;

    // int max=0;
    // for(int i=1;i<n;i++){
    //     if(arr[i]>arr[max]) max=i;
    // }
    // cout<<max;

    // binarySearch approach

    int beg=0,end=n-1;
    int max=0;
    while(beg<=end){
        int mid=end+(beg-end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            max=mid;
            break;
        }
        else if(arr[mid]<arr[mid+1]){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<max<<endl;


}