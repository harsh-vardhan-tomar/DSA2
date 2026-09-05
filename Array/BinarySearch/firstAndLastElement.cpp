#include<iostream>
#include<vector>
using namespace std;
int searchFirst(vector<int>& nums, int target) {
    int n=nums.size();
    int beg=0,end=n-1;
    int first=-1,last=-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(target<nums[mid]){
            end=mid-1;
        }
        else if(target>nums[mid]){
            beg=mid+1;
        }
        else{
            first=mid;
            end=mid-1;
        }
    }
    return first;
    }

int searchLast(vector<int>& nums, int target) {
    int n=nums.size();
    int beg=0,end=n-1;
    int first=-1,last=-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(target<nums[mid]){
            end=mid-1;
        }
        else if(target>nums[mid]){
            beg=mid+1;
        }
        else{
            last=mid;
            beg=mid+1;
        }
    }
    return last;
    }

vector<int> searchRange(vector<int> &nums){
    
    return {searchFirst(nums,8),searchLast(nums,8)};
}
int main(){

    vector<int> v={5,7,7,8,8,10};
    vector<int> ans=searchRange(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
}