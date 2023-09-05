#include<bits/stdc++.h>
using namespace std;
int mooresVoting(int arr[],int n)
{
	int res=0,count=1;
	for(int i=1;i<n;i++)
	{
		if(arr[res]==arr[i])
		count++;
		else
		count--;
		
		if(count==0)
		{
			res=i;
			count=1;
		}
	}
	count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[res]==arr[i])
		count++;
	}
	
	if(count<=n/2)
	res=-1;
	
	return res;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<mooresVoting(a,n)<<endl;
}
