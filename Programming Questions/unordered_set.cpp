#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    int arr[5]={1,2,3,4,5};
    for(int k:arr)
    s.insert(k);
    if(s.find(4)!=s.end())  //works when no is present is set
    cout<<"yes";
    else
    cout<<"no";
    // return 0;

}