#include<iostream>
using namespace std;

int main(){
    int arr[5][4]={{3,4,7,18},{2,8,3,9},{5,4,2,2},{7,3,0,8},{2,8,9,1}};
    int row=5,col=4;
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }

    
    //difference of matrices
    int arr1[3][3];
    int arr2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr1[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }



}