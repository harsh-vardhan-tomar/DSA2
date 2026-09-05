#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v1(4);
    v1.push_back(44);
    v1.push_back(66);
    v1.push_back(22);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;

    vector<int> v2={22,33,44,55};
    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;
    cout<<v2.at(2)<<endl;
    
    vector<int> v3={66,77,88,88,99,112};
    cout<<binary_search(v3.begin(),v3.end(),77)<<endl;
    cout<<find(v3.begin(),v3.end(),99)-v3.begin()<<endl;

    int count1=count(v3.begin(),v3.end(),88); // occurance of a number
    cout<<count1<<endl;
    int max=*max_element(v3.begin(),v3.end()); // returns iterator so deference it
    cout<<max<<endl;

    int ceil=*lower_bound(v3.begin(),v3.end(),100);   // returns iterator so deference it (greater than or equal to)
    cout<<ceil<<endl;
    int sceil=*upper_bound(v3.begin(),v3.end(),56);   // returns iterator so deference it (greater than)
    cout<<sceil<<endl;
}