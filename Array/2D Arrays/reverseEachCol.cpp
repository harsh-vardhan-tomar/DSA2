#include<iostream>
using namespace std;

int main(){

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int row=3,col=3;
    for(int i=0;i<col;i++){
        int beg=0,end=row-1;
        while(beg<end){
            swap(arr[beg][i],arr[end][i]);
            beg++;
            end--;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}