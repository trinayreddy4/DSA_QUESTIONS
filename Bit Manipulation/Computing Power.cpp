#include<bits/stdc++.h>
using namespace std;
int power(int n,int pow)
{
	if(pow==0)
	return 1;
	int temp=power(n,pow/2);
	temp=temp*temp;
	if(pow%2==0)
	{
		return temp;
	}
	else
	{
		return temp*n;
	}
}
int main()
{
	int n;
	int pow;
	cin>>n>>pow;
	int ans=power(n,pow);
	cout<<ans;
}