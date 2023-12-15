#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int first,int last,int k)
{
	int mid=(first+last)/2;
	while(first<=last)
	{
		if(a[mid]==k)
		return mid;
		else if(a[mid]<k)
		{
			first=mid+1;
		}
		else if(a[mid]>k)
		{
			last=mid-1;
		}
	}
	return -1;
}
int search(int a[],int x)
{
	if(a[0]==x)
	{
		return 0;
	}
	int i=1;
	while(a[i]<x)
	i*=2;
	
	if(a[i]==x)
	return i;
	
	return binarysearch(a,i/2+1,i-1,x);
	
}
int main()
{
	int a[]={1,3,4,6,87,674};
	cout<<search(a,87)<<endl;
}

