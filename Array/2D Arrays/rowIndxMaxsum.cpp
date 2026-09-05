#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5][4]={{3,4,7,18},{2,8,3,9},{5,4,2,2},{7,3,0,8},{2,8,9,1}};
    int maxSum=INT_MIN;
    int indx=-1;
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        if(maxSum<sum){
            maxSum=sum;
            indx=i;
        }
    }
    cout<<indx<<endl;


    //sum of diagonal elements
    int row=4,col=4;
    int arr1[row][col]={{3,4,7,18},{2,8,3,9},{5,4,2,2},{1,2,3,4}};
    int first=0;
    int second=0;
    for(int i=0;i<row;i++){
        first+=arr1[i][i];
    }
    cout<<first<<endl;
    
    int i=0,j=col-1;
    while(j>=0){
        second+=arr1[i][j];
        i++;
        j--;
    }
    cout<<second<<endl;
    

}