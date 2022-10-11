#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
     int sum1 = 0, sum2 = 0, sum = 0, i, j, n, k,m,t;
     string temp;
     cin>>t;
     m=t;
     while(t--)
     {
          
     
      sum=0;
     

          cin >> n;

          cin >> temp;

          for (i = 0; i < n; i++)
          {
               if ((int(temp[i]) - 48) == 1)
                    continue;
               else
               {
                    j = i + 1;
                    while (j < n)
                    {
                         if ((int(temp[j]) - 48) == 1)
                         {
                              sum1 += abs(i - j);
                              break;
                         }
                         j++;
                    }
                    k = i - 1;
                    while (k >= 0)
                    {
                         if ((int(temp[k]) - 48) == 1)
                         {
                              sum2 += abs(i - k);
                              break;
                         }
                         k--;
                    }
                    if (sum1 < sum2 and sum1 != 0)
                         sum += sum1;
                    if (sum1 < sum2 and sum1 == 0)
                         sum += sum2;
                    if (sum2 < sum1 and sum2 != 0)
                         sum += sum2;
                    if (sum2 < sum1 and sum2 == 0)
                         sum += sum1;
                    if (sum1 == sum2)
                         sum += sum1;

                    
                    sum1 = sum2 = 0;
               }
          }
          
          cout <<"Case"<<" "<<"#"<<m-t<<":"<<" "<< sum;
          
     }
     return 0;
     
}