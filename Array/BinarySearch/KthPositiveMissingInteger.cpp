#include<iostream>
#include<vector>
using namespace std;

// int kthMissingFind(vector<int>& arr, int n,int k){
//     int num=1;
//     while(k>0){
//         bool found=false;
//         for(int i=0;i<n;i++ ){
//         if(arr[i]==num){
//             found=true;
//             break;
//         }
//     }
//     if(!found){
//         k--;
//         if(k==0)return num;
//     }
//     num++;
//     }
//     return -1;
// }

int kthMissingFind(vector<int>& arr, int n,int k){
    int beg=0,end=n-1,ans=n;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(arr[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    return ans+k;
}

int main(){

    vector<int> arr1={1,3,4,7,11,12};
    vector<int> arr2={1,2,3,4};
    int m=6,n=4;
    int k1=5,k2=2;
    cout<<kthMissingFind(arr1,m,k1)<<endl;
    cout<<kthMissingFind(arr2,n,k2)<<endl;
}