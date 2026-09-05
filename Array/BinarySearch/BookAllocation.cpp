#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr,int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(mid>=pageSum+arr[i]){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> &arr,int n,int m){
    int beg=0,sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int end=sum;
    int ans=-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={12,34,67,90};
    int n=4;
    cout<<allocateBooks(arr,n,2); // m = no. of students (kitne students ko books allocate hungi) 

}