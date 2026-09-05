#include<iostream>
using namespace std;

int main(){

    int number=123;
    int rev=0;
    int rem;
    while(number>0){
        rem=number%10;
        rev=(rev*10)+rem;
        number/=10;
    }
    cout<<"no. after reverse: "<<rev;

    int number2[]={1,2,3};
    int n=3;
    int i=0,j=n-1;
    while(i<j){
        swap(number2[i],number2[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<"no. after reverse: "<<number2[i];
    }

}