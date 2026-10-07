#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={3,2,5,3,1,2,3,7};
    int n=arr.size();
    for(int i=0;i<n;i++){
        arr[i]-=1;
    }
    for(int i=0;i<n;i++){
        int original=arr[i]%n;
        arr[original]+=n;
    }
    for(int i=0;i<n;i++){
        cout<<"occurance of "<<i+1<<" is "<<arr[i]/n<<endl;
    }
}