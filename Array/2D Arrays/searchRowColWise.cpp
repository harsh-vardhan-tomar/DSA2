#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr={{4,8,15,25,60},{18,22,26,42,80},{36,40,45,68,104},{70,99,114,128,170}};
    int row=arr.size();
    int col=arr[0].size();
    int target=18;
    int i=0;
    int ispresent=0;
    // while(i<row){
    //     if(arr[i][0]<=target && target<=arr[i][col-1]){
    //     int beg=0,end=col-1;
    //     while(beg<=end){
    //         int mid=beg+(end-beg)/2;
    //         if(arr[i][mid]==target){
    //             ispresent=1;
    //             break;
    //         }
    //         else if(target<arr[i][mid]){
    //             end=mid-1;
    //         }
    //         else{
    //             beg=mid+1;
    //         }
    //     }
    //     if(ispresent){
    //         break;
    //     }
    // }
    // i++;
    // }
    // if(ispresent){
    //     cout<<"found at row_index:"<<i<<endl;
    // }
    // else{
    //     cout<<"not found";
    // }

    
}