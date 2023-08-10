#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int s,int n)
{
	if(n==0)
	{
		return (s==0)?1:0;
		
	}
	return solve(arr,s,n-1)+solve(arr,s-arr[n-1],n-1);
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<solve(arr,25,n);
}
