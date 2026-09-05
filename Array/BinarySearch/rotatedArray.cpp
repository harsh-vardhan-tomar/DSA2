#include<iostream>
using namespace std;

// void reverse(int arr[],int i,int j){
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }  
// }

// void rotate(int arr[],int n,int k){
//     k=k%n;
//     reverse(arr,0,n-k-1);
//     reverse(arr,n-k,n-1);
//     reverse(arr,0,n-1);
// }
int findMin(int arr[],int n){
    int beg=0,end=n-1;
    int min=arr[0];
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(arr[0]<=arr[mid]){
            beg=mid+1;
        }
        else if(arr[0]>arr[mid]){
            min=arr[mid];
            end=mid-1;
        }
    }
    return min;
}

int main(){

    // int arr[]={2,4,6,8,10};
    // int n=5;
    // rotate(arr,n,2);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    int arr[]={1,2};
    int n=2;
    
    cout<<findMin(arr,n)<<endl;
    

}