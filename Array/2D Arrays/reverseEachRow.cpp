#include<iostream>
using namespace std;

int main(){
    int arr[5][4]={{3,4,7,18},{2,8,3,9},{5,4,2,2},{7,3,0,8},{2,8,9,1}};
    int row=5,col=4;
    for(int i=0;i<5;i++){
            int beg=0,end=col-1;
            while(beg<end){
                swap(arr[i][beg], arr[i][end]);
                beg++;
                end--;
            }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}