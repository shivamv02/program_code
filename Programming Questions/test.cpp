#include<bits/stdc++.h>

using namespace std;
int largest_band(vector<int> arr){
	unordered_set<int> s;
	int largestno=1;
	for(int i=0;i<arr.size();i++)
	s.insert(arr[i]);

	for(int element: s)
	{   
		int parent=element-1;
		if(s.find(parent)==s.end())  //parent is present in set if present then continue to next element of array
		{   int nextno=element+1;
			int cnt=1;
			while(s.find(nextno)!=s.end())  //check next no is present or not
			{
				nextno++;
				cnt++;           
			}
			if(cnt>largestno)
			{
				largestno=cnt;
			}
		}
		

	}
	return largestno;
}	

int main()
{
	vector<int> arr={0,1,6,7,4,3,3,3,66};
	cout<<largest_band(arr);
	
}
