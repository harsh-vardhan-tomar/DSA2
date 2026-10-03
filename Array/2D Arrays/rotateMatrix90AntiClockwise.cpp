#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int row=arr.size();
        int col=arr[0].size();
        for(int i=0;i<row-1;i++){
            for(int j=i+1;j<col;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        int i=0,j=row-1;
        while(i<j){
            for(int k=0;k<col;k++){
                swap(arr[i][k],arr[j][k]);
            }
            i++;
            j--;
        }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 

}