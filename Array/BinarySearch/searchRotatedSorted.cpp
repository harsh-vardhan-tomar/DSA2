#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr , int target){
    int n=arr.size();
    int beg=0,end=n-1;
    int indx=-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(target==arr[mid]){
            indx=mid;
            break;
        }
        else if(arr[mid]>=arr[0]){
            if(target<=arr[mid] && target>=arr[beg]){
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
        else if(arr[mid]<arr[0]){
            if(target>=arr[mid] && target<=arr[end]){
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return indx;
}

int main(){

    vector<int> arr={6,7,1,2,3,4,5};
    int n=7;
    cout<<search(arr,1);

}