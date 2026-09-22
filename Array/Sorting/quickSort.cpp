#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int i=low-1;
    int p=arr[high];
    for(int j=low;j<high;j++){
        if(arr[j]<p){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quicksort(vector<int> &arr, int low, int high){
    if(low<high){
        int part=partition(arr,low,high);
        quicksort(arr,low,part-1);
        quicksort(arr,part+1,high);
    }
}

int main(){
    vector<int> arr={12,67,33,77,92,19};
    int n=arr.size();
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}