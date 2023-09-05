#include<bits/stdc++.h>
using namespace std;
void solve(string n,string curr="",int i=0)
{
	if(i==n.length())
	{
		cout<<curr<<endl;
		return;
	}
	solve(n,curr+n[i],i+1);
	solve(n,curr,i+1);
	
}
int main()
{
	string s;
	cin>>s;
	solve(s);
}
