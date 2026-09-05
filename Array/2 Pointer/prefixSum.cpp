#include<iostream>
using namespace std;

int main(){
    int arr[]={6,4,5,-3,2,8};
    int n=6;
    int ans[n];
    int sum=0;
    //ans[0]=arr[0];
    ans[n-1]=arr[n-1];
    // for(int i=0;i<n;i++){  // prefix
    //     sum=sum+arr[i];
    //     ans[i]=sum;
    //  }
    // for(int i=1;i<n;i++){  //other approach(prefix)
    //     ans[i]=ans[i-1]+arr[i];
    // }
    // for(int i=n-1;i>=0;i--){  // suffix
    //     sum=sum+arr[i];
    //     ans[i]=sum;
    // }
    for(int i=n-2;i>=0;i--){  //other approach(suffix)
        ans[i]=ans[i+1]+arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}