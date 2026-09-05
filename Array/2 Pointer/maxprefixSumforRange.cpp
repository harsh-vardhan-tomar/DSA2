#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    vector<int> arr={1,-2,3,4,-5};
    vector<vector<int>> queries={{0,4},{2,3},{1,3}};
    int r=queries.size();
    vector<int> ans;
    for(int i=0;i<r;i++){
        int sum=0,max_val=INT_MIN;
        for(int j=queries[i][0];j<=queries[i][1];j++){
            sum+=arr[j];
            if(sum>max_val){
                max_val=sum;
            }
        }
        ans.push_back(max_val);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}