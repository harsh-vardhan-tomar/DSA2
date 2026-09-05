#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr={4,2,0,5,2,6,2,3};
    int n=8;
    // vector<int> prefixmax(n);  
    // prefixmax[0]=arr[0];

    // for(int i=1;i<n;i++){
    //     if(prefixmax[i-1]>=arr[i]){
    //         prefixmax[i]=prefixmax[i-1];
    //     }
    //     else{
    //         prefixmax[i]=arr[i];
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<prefixmax[i]<<" ";
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
    for(int i=0;i<n;i++){
        cout<<suffixmax[i]<<" ";
    }

}