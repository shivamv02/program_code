#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={1,2,3,4,5,6,7,8,9,11,22};
    vector<vector<int>> result;
    int tsum,sum,i,j,k,n;
    cin>>tsum;
    n=a.size();
    sort(a.begin(),a.end());
    for(i=0;i<n-2;i++)
    {
        j=i+1;
        k=n-1;
        while (j<k)
        {   sum=a[i]+a[j]+a[k];
            if(sum>tsum)
            k--;
            else if(sum<tsum)
            j--;
            else
            {
            result.push_back({a[i],a[j],a[k]});
            j++;
            k--;
            }
        }
        
    }
    for(auto k:result){
    for(auto v:k)
    cout<<v<<",";
    cout<<"\n";
    }
return 0;

}