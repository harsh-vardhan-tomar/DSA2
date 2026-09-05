#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        int row1=mat.size();
        int col1=mat[0].size();
        // vector<vector<int>> arr(row1,vector<int>(col1));
        // for(int i=0;i<row1;i++){
        //     for(int j=0;j<col1;j++){
        //         arr[i][j]=mat[j][i];
        //     }
        // }
        // return arr;
        // for(int i=0;i<row1;i++){
        //     for(int j=i+1;j<col1;j++){
        //         swap(mat[i][j],mat[j][i]);
        //     }
        // }
        for(int i=mat.size()-1;i>0;i--){
            for(int j=0;j<col1-1;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        return mat;
    }

int main(){
    vector<vector<int>> arr={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    arr=transpose(arr);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}