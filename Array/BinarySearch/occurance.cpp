#include<iostream>
using namespace std;

int searchFirst(int arr[],int n,int target){
    int beg=0,end=n-1;
    int first=-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(arr[mid]==target){
            first=mid;
            end=mid-1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }

    }
    return first;
}

int searchLast(int arr[],int n,int target){
    int beg=0,end=n-1;
    int last=-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(arr[mid]==target){
            last=mid;
            beg=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }

    }
    return last;
}

int main(){

    int arr[]={2,4,4,4,4,7,8};
    int n=7;
    int first=searchFirst(arr,n,4);
    int last=searchLast(arr,n,4);
    int occurance=(last-first)+1;
    cout<<"Occurance of 4 in array is : "<<occurance<<endl;


    // int count=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==4){
    //         count++;
    //     }
    // }
    // cout<<count;


}