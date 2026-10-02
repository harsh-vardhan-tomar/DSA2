#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxArea(vector<int>& arr) {
        int finalAns=INT_MIN;
        int n=arr.size();
        if(n<2) return 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a=min(arr[i],arr[j]);
                int ans=((j-i)*a);
                if(ans>finalAns){
                    finalAns=ans;
                }
            }
        }
        return finalAns;
    }

int main(){

    vector<int> arr={1,8,6,2,5,4,8,3,7};
    cout<<maxArea(arr)<<endl;

}