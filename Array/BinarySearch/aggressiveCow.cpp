#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n,int k, int mid){
    if(k>n) return false;
    int CowsCount=1;
    int lastPlacedPos=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-lastPlacedPos>=mid){ // we can also write: mid+lastPlacedPos<=arr[i]
            lastPlacedPos=arr[i];
            CowsCount++;
            if(CowsCount>=k) return true;
        }
    }
    return false;
}

int aggressiveCow(vector<int> &arr,int k){
    int n=arr.size(); 
    int maxVal = *max_element(arr.begin(), arr.end());
    int minVal = *min_element(arr.begin(), arr.end());
    int beg=1,end=maxVal-minVal,ans=-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={1,2,5,7,10};
    sort(arr.begin(), arr.end());
    int n=5;
    cout<<aggressiveCow(arr,3);

}