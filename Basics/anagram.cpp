#include<iostream>
using namespace std;

int main(){
    string str1="listen";
    string str2="silent";
    int frequency[26];
    int count=0;
    for(int i=0;str1[i]!='\0';i++){
       for(int j=i+1;str1[i]!='\0';j++){
            if(str1[i]==str1[j]){
                count++;
                frequency[j]=count;
            }
       }
    }

}