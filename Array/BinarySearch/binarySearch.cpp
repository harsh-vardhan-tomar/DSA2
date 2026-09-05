#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n, int k){
    int beg=0,end=n-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(k==arr[mid]){
            return mid+1;
        }
        else if(k<arr[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,12,45,56,59,65,78,99};
    int n=8;
    int beg=0,end=n-1;
    int key=99;
    int isPresent=BinarySearch(arr,n,key);
    if(isPresent>=0){
        cout<<"mil gya at loc "<<isPresent<<endl;
    }
    else{
        cout<<"nhi mila"<<endl;
    }
    
    }