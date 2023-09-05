#include<bits/stdc++.h>
using namespace std;
int first(int a[],int low,int high,int k)
{
	int mid=(low+high)/2;
	while(low<=high)
	{
		if(a[mid]<k)
		{
			low=mid+1;
		}
		else if(a[mid]>k)
		{
			high=mid-1;
		}
		else
		{
			if(mid==0||a[mid]!=a[mid-1])
			{
				return mid;
			}
			else
			{
				high=mid-1;
			}
		}
	}
	return -1;
}
int last(int a[],int low,int high,int k,int n)
{
	int mid=(low+high)/2;
	while(low<=high)
	{
		if(a[mid]>k)
		{
			high=mid-1;
		}
		else if(a[mid]<k)
		{
			low=mid+1;
		}
		else
		{
			if(mid==n-1||a[mid]!=a[mid+1])
			{
				return mid;
			}
			else
			{
				low=mid+1;
			}
		}
		
	}
	return -1;
}
int ans(int a[],int n,int k)
{
	cout<<first(a,0,n-1,k)<<endl;
	if(first(a,0,n-1,k)==-1)
	return 0; 
	return last(a,0,n-1,k,n)-first(a,0,n-1,k)+1;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int count=ans(a,n,k);
	cout<<cout<<endl;
}
