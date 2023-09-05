#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>a,int low,int high,int k)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid] >k)
		{
			return solve(a,low,mid-1,k);
		}
		else if(a[mid]<k)
		{
			return solve(a,mid+1,high,k);
		}
		else
		{
			if(mid==0||a[mid]!=a[mid-1])
			return mid;
			else
			return solve(a,low,mid-1,k);
		}
	}
	else
	return -1;
}
int main()
{
	int n,k;
	cin>>n>>k;
	
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int ans=solve(a,0,n-1,k);
	cout<<ans<<endl;
}
