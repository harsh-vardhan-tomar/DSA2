#include<iostream>
using namespace std;

// void reverse(int arr[],int i, int j){
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
// }

// void rotate(int arr[],int k,int n){
//     reverse(arr,0,n-k-1);
//     reverse(arr,n-k,n-1);
//     reverse(arr,0,n-1);
// }

int main(){
    int arr[]={2,7,4,11,5,8};
    int n=6;
    int temp=arr[n-1];
    // rotate(arr,2,n);
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}