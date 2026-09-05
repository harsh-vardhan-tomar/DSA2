#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n, int h, int mid){
    int time=0;
    for(int i=0;i<n;i++){
        time=time+(arr[i]/mid);
    }
    if(time>h){
        return false;
    }
    return true;

}

int kokoEatingBanana(vector<int> &arr, int n, int h){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int beg=sum/h,end= *max_element(arr.begin(), arr.end()),ans=-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(isPossible(arr,n,h,mid)){
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
    vector<int> arr={3,6,11,7};
    int n=4,h=8;
    cout<<kokoEatingBanana(arr,n,h)<<endl;
} 