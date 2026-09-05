#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(vector<int> &arr, int B){
    if(B<0){
        B=-1*B;
    }
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int beg=0,end=1;
    while(end<n){
        int diff=arr[end]-arr[beg];
        if(diff==B){
            return 1;
        }
        else if(diff<B){
            end++;
        }
        else{
            beg++;
        }
        if(beg==end){
            end++;
        }
    }
    return 0;
}
int main(){
    vector<int> arr={3,2,10,5,50,80};
    cout<<solve(arr,45);

    

}