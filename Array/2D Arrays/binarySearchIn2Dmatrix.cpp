#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr={{2,6,10,14,18},{20,24,27,29,38},{47,52,78,93,102},{108,111,200,218,310}};
    int target=52;
    int row=arr.size();
    int col=arr[0].size();
    int beg=0,end=(row*col)-1;
    bool ispresent=0;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        int row_index=mid/col;
        int col_index=mid%col;
        if(arr[row_index][col_index]==target){
            ispresent=1;
            break;
        }
        else if(target<arr[row_index][col_index]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    if(ispresent){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}