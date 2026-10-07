#include<iostream>
using namespace std;

int main(){

    // char arr[]={'A','P','P','L','E'};
    // for(int i=0;i<5;i++){
    //     cout<<arr[i];
    // }

    // char arr[20];
    // cin>>arr;
    // cout<<arr;

    // string s="Harsh";
    // cout<<s;

    // string str;
    // getline(cin,str);
    // cout<<str;

    // string s1="Harsh";
    // string s2="Tomar";
    // string s3=s1+s2;
    // cout<<s3;

    // string s1="Rohan is a \" good \" boy";
    // cout<<s1;

    //  string s="\0";  // empty string
    //  cout<<s;

    bool ispalindrome=false;
    string s1="naman";
    int beg=0,end=s1.size()-1;
    while(beg<end){
        if(s1[beg]==s1[end]){
            ispalindrome=true;
            beg++;
            end--;
        }
        else{
            ispalindrome=false;
            break;
        }
    }
    if(ispalindrome){
        cout<<"String is a palindrome";
    }
    else{
        cout<<"String is not a palindrome";
    }


}