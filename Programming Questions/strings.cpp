#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> a={"A","b"};
    int m,c,f;
    for(int i=0;i<a.size();i++)
    {   string k=a[i];
        m=1;f=0;
        for(int j=0;j<k.size();j++)
        {
            c=int(k[j]);
            if(c>=97&&c<=109)
            {    
                if(f==2)
                {m=0;
                 break;
                }
                f=1;
                continue;
            }
            if(c>=78&&c<=90)
            {   if(f==1)
                {m=0; 
                break;
                }
                f=2;
                continue;
            }
        }
        if(m==0)
        break;
    }
        if(m==0)
        cout<<"NO";
        else
        cout<<"YES";
    return 0;

}