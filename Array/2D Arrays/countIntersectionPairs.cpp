#include<iostream>
#include<vector>
using namespace std;

int main(){
    int intersect=0;
    vector<vector<int>> arr={{1,2},{3,4},{5,6}};
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(max(arr[i][0],arr[j][0])<=min(arr[i][1],arr[j][1])){
                intersect++;
            }
        }
    }
    cout<<intersect<<endl;

}