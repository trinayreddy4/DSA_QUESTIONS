#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
	int ps=(1<<s.length());
	
	for(int i=0;i<ps;i++)
	{
		for(int j=0;j<s.length();j++)
		{
			if(i&(1<<j))
			{
				cout<<s[j];
			}
		}
		cout<<endl;
	}
}
int main()
{
	string s;
	cin>>s;
	solve(s);
}
