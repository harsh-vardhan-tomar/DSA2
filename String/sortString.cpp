#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s="edcab";
    vector<int> count(26);
    // string ans="";                 //extra string O(N)
    for(int i=0;i<s.size();i++){
        int indx=s[i]-'a';
        count[indx]+=1;
    }
    s="";
    for(int i=0;i<count.size();i++){
        char c='a'+i;
        while(count[i]){
            s+=c;
            count[i]--;
        }
    }
    cout<<s;
}