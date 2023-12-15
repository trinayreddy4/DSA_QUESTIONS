#include<bits/stdc++.h>
using namespace std;
int sqRootFloor(int x)
{
	int low=1,high=x,ans=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		int sqr=mid*mid;
		
		if(sqr==x)
		return mid;
		
		if(sqr<=x)
		{
			low=mid+1;
			ans=mid;
		}
		else
		{
			high=mid-1;
		}
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<sqRootFloor(n)<<endl;
}
