#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
      vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0;i<=row+col-2;i++){
        for(int j=0;j<row;j++){
            for(int k=0;k<col;k++){
                if(j+k==i){
                    cout<<arr[j][k]<<" ";
                }
            }
        }
    }
    

}