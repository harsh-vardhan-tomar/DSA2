#include<iostream>
using namespace std;

int main(){
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int r=3,c=3;
    for(int i=0;i<=r+c-2;i++){
        for(int j=0;j<r;j++){
            for(int k=0;k<c;k++){
                if(j+k==i){
                    cout<<arr[j][k]<<" ";
                }
            }
        }
    }
}