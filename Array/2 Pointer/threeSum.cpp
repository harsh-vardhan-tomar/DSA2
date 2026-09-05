#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            int j=i+1,k=n-1;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]==0){
                    ans.push_back({arr[i],arr[j],arr[k]});
                    j++;
                    k--;
                    while(j<k && arr[j]==arr[j-1]){
                        j++;
                    }
                    while(j<k && arr[k]==arr[k+1]){
                        k--;
                    }
                }
                else if(arr[i]+arr[j]+arr[k]>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
int main(){
    vector<int> arr={-1,0,1,2,-1,-4};
    int n=6;
    vector<vector<int>> ans=threeSum(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}