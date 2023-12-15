#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	string n;
	cin>>n;
	
	map<char,int>mp;
	if(s.length()!=n.length())
	{
		cout<<"NOT ANAGRAM"<<endl;
		return 0;
	}
	for(int i=0;i<s.length();i++)
	{
		mp[s[i]]++;
	}
	
	for(int i=0;i<n.length();i++)
	{
		mp[n[i]]--;
		if(mp[n[i]]==0)
		{
			mp.erase(n[i]);
		}
	}
//	cout<<mp.size()<<endl;
//	for(auto i:mp)
//	{
//		cout<<i.first<<" "<<i.second<<endl;
//	}
	if(mp.size()==0)
	{
		cout<<"BOTH ARE ANAGRAMS"<<endl;
		return 0;
	}
	else
	{
		cout<<"NOT ANAGRAMS"<<endl;
	}
}
