#include<iostream>
using namespace std;

int main(){
    int arr[]={9,7,3,1,6};
    int n=5;
    for(int i=1;i<n;i++){
        int index=arr[i];
        int j=i-1;
        while(j>=0 && index<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=index;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}