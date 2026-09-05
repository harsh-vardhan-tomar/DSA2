#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        if(n<2) return{-1,-1};
        int left=0,right=n-1;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==target){
                return {left+1,right+1};
            }
            else if(sum>target){
                right--;
            }
            else{
                left++;
            }
        }
        return {-1,-1};
    }

int main(){
    vector<int> arr={2,7,11,15};

    int n=4;
    vector<int> ans=twoSum(arr,9);
    for(int i=0;i<2;i++){
        cout<<ans[i]<<" ";
    }

}