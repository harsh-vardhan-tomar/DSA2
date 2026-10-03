#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

// int minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C){
//     int finalAns=INT_MAX;
//     for(int i=0;i<A.size();i++){
//         for(int j=0;j<B.size();j++){
//             for(int k=0;k<C.size();k++){
//                 int a=abs(A[i]-B[j]);
//                 int b=abs(B[j]-C[k]);
//                 int c=abs(C[k]-A[i]);
//                 int ans = max(a, max(b, c));
//                 if(ans<finalAns){
//                     finalAns=ans;
//                 }
//             }
//         }
//     }
//     return finalAns;
// }

int minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C){
    int finalAns=INT_MAX;
    // sort(A.begin(),A.end());
    // sort(B.begin(),B.end());
    // sort(C.begin(),C.end());
    int i=0,j=0,k=0;
    int n1=A.size();
    int n2=B.size();
    int n3=C.size();
    while(i<n1 && j<n2 && k<n3){
        int a=abs(A[i]-B[j]);
        int b=abs(B[j]-C[k]);
        int c=abs(C[k]-A[i]);
        int ans = max(a, max(b, c));
        if(ans<finalAns){
            finalAns=ans;
        }
        if(A[i]<B[j] && A[i]<C[k]){
            i++;
        }
        else if(B[j]<=A[i] && B[j]<=C[k]){
            j++;
        }
        else{
            k++;
        }
    }
    return finalAns;
}

int main(){
    vector<int> A={1,4,10};
    vector<int> B={2,15,20};
    vector<int> C={10,12};
    int ans=minimize(A,B,C);
    cout<<ans<<endl;
}