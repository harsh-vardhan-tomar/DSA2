#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>>matrix(3,vector<int>(4,1)); // 3 row and 4 col initialized by 1.

    // for(int i=0;i<matrix.size();i++){
    //     for(int j=0;j<matrix[i].size();j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<"Rows = "<<matrix.size()<<endl;
    cout<<"Column = "<<matrix[0].size()<<endl;

}