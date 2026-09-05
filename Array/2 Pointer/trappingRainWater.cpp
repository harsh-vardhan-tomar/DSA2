#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& arr) {
        int n=arr.size();
        // int ans=0;
        // for(int i=1;i<=n-2;i++){
        //     int max1=arr[i],max2=arr[i];
        //     for(int j=i-1;j>=0;j--){
        //         if(max1<arr[j]){
        //             max1=arr[j];
        //         }
        //     }
        //     for(int k=i+1;k<n;k++){
        //         if(max2<arr[k]){
        //             max2=arr[k];
        //         }
        //     }
        //     int mini=min(max1,max2);
        //     int ans1=mini-arr[i];
        //     ans=ans+ans1;
        // }
        // return ans;
        vector<int> leftmax(n);
        vector<int> rightmax(n);
        leftmax[0]=0;
        rightmax[n-1]=0;
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],arr[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],arr[i+1]);
        }
        int water=0;
        int miniheight;
        for(int i=0;i<n;i++){
            miniheight=min(leftmax[i],rightmax[i]);
            if(miniheight-arr[i]>=0){
                water+=(miniheight-arr[i]);
            }
        }
        return water;
    }

int main(){
    vector<int> arr={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(arr);

}