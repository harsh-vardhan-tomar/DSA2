#include<iostream>
using namespace std;

int main(){
    int arr[]={9,7,3,1,6};
    int n=5;
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[i],arr[min]); 
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}