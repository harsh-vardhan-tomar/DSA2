#include<iostream>
using namespace std;

int main(){
    int arr[]={11,22,33,44,55,66};
    int n=6;
    int beg=0,end=n-1;
    int target;
    cin>>target;
    int indx;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(arr[mid]==target){
            indx=mid;
            break;
        }
        else if(target<arr[mid]){
            indx=mid;
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    cout<<indx<<endl;

}