#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr={4,3,2,1,2,7,6};
    int n=arr.size();
    vector<int> count(n);
    for(int i=0;i<n;i++){
        int a=arr[i];
        count[a-1]+=1;
    }
    for(int i=0;i<n;i++){
        if(count[i]==0){
            cout<<"Missing: "<<i+1<<endl;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(count[i]==2){
            cout<<"Repeating: "<<i+1<<endl;
            break;
        }
    }

}