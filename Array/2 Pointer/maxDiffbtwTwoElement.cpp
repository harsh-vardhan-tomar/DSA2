#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

    vector<int> arr={9,5,8,12,2,3,7,4};
    int n=arr.size();
    int maxdiff=INT_MIN;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>arr[i] && arr[j]-arr[i]>maxdiff){
    //             maxdiff=arr[j]-arr[i];
    //         }
    //     }
    // }
    vector<int> suffixmax(n);
    suffixmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(suffixmax[i+1]>=arr[i]){
            suffixmax[i]=suffixmax[i+1];
        }
        else{
            suffixmax[i]=arr[i];
        }
    }
    for(int i=0;i<n-1;i++){
        if(suffixmax[i+1]-arr[i]>=maxdiff){
            maxdiff=suffixmax[i+1]-arr[i];
        }
    }
    cout<<maxdiff<<endl;
}