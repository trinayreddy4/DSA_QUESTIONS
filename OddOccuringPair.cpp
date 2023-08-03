#include<bits/stdc++.h>
using namespace std;
vector<int> FindOddOccuring(vector<int>a)
{
	int n=a.size();
	int k=a[0];
	for(int i=1;i<n;i++)
	{
		k^=a[i];
	}
	int r=(k&(~(k-1)));
	int res1=0,res2=0;
	for(int i=0;i<n;i++)
	{
		if((a[i]&r)!=0)
		{
			res1^=a[i];
		}
		else
		{
			res2^=a[i];
		}
	}
	vector<int>ans;
	ans.push_back(res1);
	ans.push_back(res2);
	return ans;
}
int main()
{
	int n;
	cin>>n;
	vector<int>nums;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		nums.push_back(t);
	}
	vector<int>ans=FindOddOccuring(nums);
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}

}
