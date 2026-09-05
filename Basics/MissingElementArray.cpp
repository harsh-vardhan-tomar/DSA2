#include<iostream>
using namespace std;

int findMissing(int arr[],int n){
    int sum=(n*(n+1))/2,sum1=0;
    
    for(int i=0;i<n-1;i++){
        sum1=sum1+arr[i];
    } 
    return (sum-sum1);
    
}

int main(){
    int n=6;
    int arr[]={1,3,4,5,6};
    
    cout<<findMissing(arr,n);
    

}