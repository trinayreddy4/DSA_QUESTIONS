#include<bits/stdc++.h>
using namespace std;
int findOddOccuring(vector<int> a)
{
	int res=0;
	for(int i=0;i<a.size();i++)
	{
		res^=a[i];
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	vector<int>nums;
	
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		nums.push_back(t);
	}
	int res=findOddOccuring(nums);
	cout<<res<<endl;
}
