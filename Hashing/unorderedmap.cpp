#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
    fastread();
	
	unordered_map<string,int>m;
	m["gfg"]=20;
	m["ide"]=30;
	m["course"]=40;
	
	auto it=m.find("gfg");
	if(it!=m.end())
	{
		ou<<it.first<<" ->"<<it.second;
	}
	
}


