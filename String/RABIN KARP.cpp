#include<bits/stdc++.h>
using namespace std;
int d=7;
long long int q=100000007;
void rbSearch(string txt,string pat)
{
	int n = txt.length();
	int m = pat.length();
	
	int h=1;
	
	for(int i=1;i<=m-1;i++)
	{
		h=(h*d)%q;				// calculate the d^(m-1)
	}
	
	int t=0,p=0;
	for(int i=0;i<m;i++)
	{
		p=(p*d+pat[i])%q;		// calculate the pattern hash value
		t=(t*d+txt[i])%q;		// calculate the first window hash value
	}
	
	for(int i=0;i<n-m+1;i++)
	{
		if(p==t)
		{
			bool flag=true;
			
			for(int j=0;j<m;j++)
			{
				if(txt[i+j]!=pat[j])
				{
					flag=false;
					break;
				}
			}
			if(flag)
			{
				cout<<i<<endl;
			}
		}
		
		if(i<n-m)
		{
			t=(d*(t-txt[i]*h)+txt[i+m])%q;
			if(t<0)
			{
				t+=q;
			}
		}
	}
}
int main()
{
	string text,pattern;
	getline(cin,text);
	getline(cin,pattern);
	rbSearch(text,pattern);
}
