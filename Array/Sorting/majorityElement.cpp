#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={3,3,2,3,1,3,2,2,1,3,3};
    int n=arr.size();
    int candidate=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
            count=1;
        }
        else{
            if(candidate==arr[i]){
                count++;
            }
            else{
                count--;
            }
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count>(n/2)){
        cout<<"Majority Element in array :"<<candidate<<endl;
    }
    else{
        cout<<"No majority element"<<endl;
    }
    
}