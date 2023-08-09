#include<bits/stdc++.h>
using namespace std;
int solve(string s)
{
	int odd=0,even=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1'&& i%2==0)
		{
			even++;
		}
		else if(s[i]=='1' && i%2!=0)
		{
			odd++;
		}
	}
	
	if(abs(even-odd)%3==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	string s;
	cin>>s;
	int n=solve(s);
	if(n)
	{
		cout<<"Divisible by 3"<<endl;
	}
	else
	{
		cout<<"Not Divisible by 3"<<endl;
	}
}
