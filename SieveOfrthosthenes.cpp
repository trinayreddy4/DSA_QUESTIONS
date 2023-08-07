#include<bits/stdc++.h>
using namespace std;
void sieve(int n)
{
	vector<bool>p(n+1,true);
	for(int i=2;i<=n;i++)
	{
			if(p[i])
			{
				cout<<i<<" ";
				for(int j=i*i;j<=n;j+=i)
				{
					p[j]=false;	
				}	
			}	
	}	
}

int main()
{
	int n;
	cin>>n;
	sieve(n);
}
