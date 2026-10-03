#include<iostream>
#include<vector>
using namespace std;

void rotate90(vector<vector<int>> &arr){
    int row=arr.size();
    int col=arr[0].size();
        for(int i=0;i<row-1;i++){
            for(int j=i+1;j<col;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            int j=0,k=col-1;
            while(j<k){
                swap(arr[i][j],arr[i][k]);
                j++;
                k--;
            }
        }
    
}

int main(){

    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int k;
    cin>>k;
    k=k%4;
    int row=arr.size();
    int col=arr[0].size();
    while(k>0){
        rotate90(arr);
        k--;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
}