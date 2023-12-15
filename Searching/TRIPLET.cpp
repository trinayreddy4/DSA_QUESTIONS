#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
bool isPair(vi a,int n,int x,int si)
{
	sort(a.begin(),a.end());
	int i=si,j=n-1;
	while(i<j)
	{
		if(a[i]+a[j]==x)
		return true;
		else if(a[i]+a[j]<x)
		i++;
		else
		j--;
	}
	return false;
}
bool isTriplet(vi a,int n,int x)
{
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
	{
		if(isPair(a,n,x-a[i],i+1))
		return true;
	}
	return false;
}
int main()
{
	int n;
	in>>n;
	int x;
	in>>x;
	vi a(n);
	for(auto &&i:a)
	in>>i;
	
	if(isTriplet(a,n,x))
	{
		ou<<"Sum triplet is present"<<nl;
	}
	else
	{
		ou<<"No sum triplet is present"<<nl;
	}
}


