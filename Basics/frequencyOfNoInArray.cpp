#include<iostream>
using namespace std;

int main(){
    int arr[]={2,2,4,1,8,9,8,9,1};
    int n=9;
    int count=0;
    for(int i=0;i<n;i++){
        bool visited=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                visited=true;
                break;
            }
           
        }
        if(visited){
            continue;
        }
        int count=1;

        for(int k=i+1;k<n;k++){
            if(arr[i]==arr[k]){
               count++;
            }
            
        }
        cout<<arr[i]<<"->"<<count<<endl;
    }
    
    
   
}