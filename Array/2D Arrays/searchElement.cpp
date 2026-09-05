#include<iostream>
using namespace std;

void printColwise(int arr[][3], int row, int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int arr[4][3]={{22,33,44},{55,66,77},{88,99,11},{45,67,29}};
    // int target=34;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         if(arr[i][j]==target){
    //             cout<<"found"<<endl;
    //             return 0;
    //         }
    //     }
    // }
    // cout<<"not found"<<endl;
    printColwise(arr,4,3);
    

}