#include<iostream>
using namespace std;

int sqrt(int x){
    int beg=0,end=x;
    int sqrt=1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        long long square=(long long)mid*mid;
        if(square==x){
            sqrt=mid;
            break;
        }
        else if(square>x){
            end=mid-1;
        }
        else{
            sqrt=mid;
            beg=mid+1;
        }
    }
    return sqrt;
}

int main(){

    // int n=80;
    // int ans=1;
    // for(int i=1;i<=n;i++){  //O(n)
    //     if((i*i)<=n){
    //         ans=i;
    //     }
    // }
    // cout<<ans;

    int n=10;
    cout<<sqrt(n)<<endl;

}