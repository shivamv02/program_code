#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  // your code goes here
  ll tc;
  cin>>tc;
  while(tc--)
  {
      ll n;
      cin>>n;

      ll t = pow(2,n);

      string str = to_string(t);
      while(str.size() > 1){
        ll tt = 0;
        for(int i=0; i<str.size(); i++){
            tt += (str[i] - '0');
        }
        str = to_string(tt);
      }
    
    cout<<str[0]<<endl;
      
  }
  return 0;
}