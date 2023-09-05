#include<bits/stdc++.h>
using namespace std;
int last(vector<int> a,int low,int high,int k,int n)
{
	if(low>high)
	return -1;
	
	int mid=(low+high)/2;
	
	if(a[mid]>k)
	{
		return last(a,low,mid-1,k,n);
	}
	else if(a[mid]<k)
	{
		return last(a,mid+1,high,k,n);
	}
	else
	{
		if(mid==n-1||a[mid]!=a[mid+1])
		return mid;
		else
		return last(a,mid+1,high,k,n);
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	
	vector<int>a(n);
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int ans=last(a,0,n-1,k,n);
	cout<<ans<<endl;
}
