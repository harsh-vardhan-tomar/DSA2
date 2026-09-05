#include<iostream>
using namespace std;

int main(){
    string str1="listen";
    int n1=str1.length();
    string str2="silent";
    int n2=str2.length();
    int freq[26];
    for(int i=0;i<n1;i++){
        bool visited=false;
        for(int j=0;j<i;j++){
            if(str1[i]==str1[j]){
                visited=true;
                break;
            }
        }
        if(visited){
            continue;
        }
        int count=1;
        for(int k=i+1;k<n1;k++){
            if(str1[i]==str1[k]){
                count++;
            }
        }
        freq[i]=count;
    }
    

}