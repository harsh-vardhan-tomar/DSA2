#include<iostream>
using namespace std;

int main(){

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3,col=3;
    int first=0,second=0;
    int i=0;
    while(i<row){
        first+=arr[i][i];
        i++;
    }

    i=0;
    int j=col-1;
    while(j>=0){
        second+=arr[i][j];
        i++;
        j--;
    }
    int ans=first+second;
    if(row%2==1){
        ans=ans-arr[row/2][row/2];
    }
    cout<<ans<<endl;
    
}