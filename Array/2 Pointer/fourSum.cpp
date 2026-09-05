#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int n=arr.size();
        for(int i=0;i<n-3;i++){
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && arr[j]==arr[j-1]){
                    continue;
                }
                int k=j+1,l=n-1;
                while(k<l){
                    long long sum=(long long)arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target){
                        ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                        k++;
                        l--;
                        while(k<l && arr[k]==arr[k-1]){
                            k++;
                        }
                        while(k<l && arr[l]==arr[l+1]){
                            l--;
                        }
                    }
                    else if(sum>target){
                        l--;
                    }
                    else{
                        k++;
                    }
                }
            }
        }
        return ans;
    }

int main(){
    vector<int> arr={1,0,-1,0,-2,2};
    int n=6,target=0;
    vector<vector<int>> ans=fourSum(arr,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}