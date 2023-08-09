#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s,int start,int end)
{
	if(start==end||s.length()==0||s.length()==1)
	{
		return true;
	}
	
	if(s[start]!=s[end])
	return false;
	else
	return isPalindrome(s,start+1,end-1);
	/*
	Approach 2
	
	if(start>=end)
	return true;
	
	return (s[start]==s[end])&&(isPalindrome(s,start+1,end-1));
	*/
}
int main()
{
	string s;
	cin>>s;
	if(isPalindrome(s,0,s.length()-1))
	{
		cout<<s<<"  -It is palindrome";
	}
	else
	{
		cout<<s<<"  -It is not palindrome";
	}
}
