#include<bits/stdc++.h>
using namespace std;
int peakElement(vector<int>arr,int n)
{
	int low=0;
	int high=n-1;
	
	while(low<=high)
	{
		int mid=(low+high)/2;
		if((mid==0||arr[mid]>=arr[mid-1])&&(mid==n-1||arr[mid]>=arr[mid+1]))
		{
			return mid;
		}
		else if(mid>0&&arr[mid-1]>arr[mid])
		{
			high=mid-1;
		}
		else
		low=mid+1;
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	
	vector<int>a(n);
	
	for(auto &&i:a)
	cin>>i;
	
	cout<<peakElement(a,n)<<endl;
}

