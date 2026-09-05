#include<iostream>
using namespace std;

int main(){

    int arr[4][4]={{3,6,4,2},{7,8,11,5},{9,3,2,1},{17,8,5,9}};
    int row=4,col=4;
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int k=row-1;k>=0;k--){
                cout<<arr[k][i]<<" ";
            }
        }
        cout<<endl;
    }
}