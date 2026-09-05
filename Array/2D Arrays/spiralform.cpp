#include<iostream>
using namespace std;

int main(){

    int arr[6][6]={{1,2,3,4,5,6},
                   {7,8,9,10,11,12},
                   {13,14,15,16,17,18},
                   {19,20,21,22,23,24},
                   {25,26,27,28,29,30},
                   {31,32,33,34,35,36}};
    int row=6,col=6;
    int top=0,bottom=row-1;
    int left=0,right=col-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        if(top>bottom) break;
        for(int j=top;j<=bottom;j++){
            cout<<arr[j][right]<<" ";
        }
        right--;
        if(left>right) break;
        for(int k=right;k>=left;k--){
            cout<<arr[bottom][k]<<" ";
        }
        bottom--;
        if(top>bottom) break;
        for(int l=bottom;l>=top;l--){
            cout<<arr[l][left]<<" ";
        }
        left++;
        if(left>right) break;
    }
}