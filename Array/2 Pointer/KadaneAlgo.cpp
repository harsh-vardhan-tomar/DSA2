#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// int largestSubarraySum(vector<int> arr, int n){   Brute-force O(n^2)
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(sum>max){
//                 max=sum;
//             }
//         }
//     }
//     return max;
// }

int largestSubarraySum(vector<int> arr, int n){ // kadane Algorithm O(n)
    int prefix=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        maxSum=max(maxSum,prefix);
        if(prefix<0){
            prefix=0;
        }
    }
    return maxSum;
}

int main(){

    vector<int> arr={1,-2,3,4,-5};
    int n=arr.size();
    cout<<largestSubarraySum(arr,n)<<endl;
}