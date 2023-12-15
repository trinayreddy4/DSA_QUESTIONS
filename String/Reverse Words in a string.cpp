#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define all(arr) arr.begin(),arr.end()
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
    fastread();
	string s;
	getline(cin,s);
	
	stack<string>se;
	string temp="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=' ')
		{
			temp+=s[i];
		}
		else
		{
			se.push(temp);
			temp="";
		}
	}
	se.push(temp);
	temp="";
	while(!se.empty())
	{
		temp=temp+se.top()+" ";
		se.pop();
	}
	ou<<temp<<nl;
}



