#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &arr, int s, int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int count=0;

    int *first= new int[len1];
    int *second= new int[len2];

    //copy first part of array
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k];
        k++;
    }

    //copy second part of array
    k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k];
        k++;
    }

    //merge first and second part of array
    int index1=0,index2=0;
    k=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<=second[index2]){
            arr[k]=first[index1];
            k++;
            index1++;
        }
        else{
            count+=(len1-index1);
            arr[k]=second[index2];
            k++;
            index2++;
        }
    }
    if(index1==len1){
        for(int i=index2;i<len2;i++){
            arr[k]=second[i];
            k++;
        }
    }
    if(index2==len2){
        for(int i=index1;i<len1;i++){
            arr[k]=first[i];
            k++;
        }
    }

    delete []first;
    delete []second;
    return count;
}

int mergeSort(vector<int> &arr, int s, int e){
    if(s>=e){
        return 0;
    }
    if(s<e){
        int mid=s+(e-s)/2;
        int a=mergeSort(arr,s,mid);
        int b=mergeSort(arr,mid+1,e);
        int c=merge(arr,s,e);
        int d=a+b+c;
        return d;
    }
}

int main(){
    vector<int> arr={38,27,43,3,9,82,10};
    int countInvert=mergeSort(arr,0,arr.size()-1);
    cout<<countInvert<<endl;
    return 0;
    

}