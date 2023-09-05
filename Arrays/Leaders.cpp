#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		arr.push_back(t);
	}
	int curr_ldr=arr[n-1];
	vector<int>s;
	s.push_back(curr_ldr);
	for(int i=n-2;i>=0;i--)
	{
		if(curr_ldr<arr[i])
		{
			curr_ldr=arr[i];
			s.push_back(curr_ldr);
		}
	}
	reverse(s.begin(),s.end());
	for(int i=0;i<s.size();i++)
	cout<<s[i]<<" ";
}
