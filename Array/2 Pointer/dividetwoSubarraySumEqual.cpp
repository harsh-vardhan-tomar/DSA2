#include<iostream>
#include<vector>
using namespace std;

// bool twoSubArraySumEqual(vector<int> &arr, int n){ // O(n^2)
//     bool isPossible=false;
//     for(int i=0;i<n-1;i++){
//         int sum1=0,sum2=0;
//         for(int j=0;j<=i;j++){
//             sum1+=arr[j];
//         }
//         for(int k=i+1;k<n;k++){
//             sum2+=arr[k];
//         }
//         if(sum1==sum2){
//             isPossible=true;
//             break;
//         }
//     }
//     return isPossible;
// }

// bool twoSubArraySumEqual(vector<int> &arr, int n){  // O(n)  
//     bool isPossible=false;
//     int total_sum=0,sum=0;
//     for(int i=0;i<n;i++){
//         total_sum+=arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         sum+=arr[i];
//         if(sum*2==total_sum){
//             isPossible=true;
//             break;
//         }
//     }
//     return isPossible;
// }

 bool twoSubArraySumEqual(vector<int> &arr, int n){
    bool isPossible=false;
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    int prefix=0,ans=0;
    for(int i=0;i<n-1;i++){
        prefix+=arr[i];
        ans=total_sum-prefix;
        if(prefix==ans){
            isPossible=true;
            break;
        }
    }
    return isPossible;
 }

int main(){
    vector<int> arr={1,2,3,4,10};
    int n=5;
    int i=0,j=n-1;
    if(twoSubArraySumEqual(arr,n)){
        cout<<"There are 2 subarray whose sum is equal"<<endl;
    }
    else{
        cout<<"No, There are no 2 subarray whose sum is equal"<<endl;
    }
}