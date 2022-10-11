#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> mp;
    string s="shivamverma";
    for(auto i:s)
    mp[i]++;
    for(auto i:mp)
    cout<<i.first<<" "<<i.second<<"\n";
    cout<<mp.begin()->first;
    return 0;

      
}