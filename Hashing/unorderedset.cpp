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
	
	unordered_set<int>a;
	
	a.insert(10);
	a.insert(5);
	a.insert(15);
	a.insert(20);
	a.insert(20);
	auto it=a.find(20);
	ou<<*it<<nl;
	
	for(auto i:a)
	ou<<i<<nl;
}


