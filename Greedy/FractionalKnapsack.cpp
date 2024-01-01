#include<bits/stdc++.h>
using namespace std;
static bool mycmp(pair<int,int>i1,pair<int,int>i2)
{
	double v1=(double)i1.first/i1.second;
	double v2=(double)i2.first/i2.second;
	
	return v1>v2;
}
double fKnap(vector<pair<int,int>>items,int capacity)
{
	sort(items.begin(),items.end(),mycmp);
	int remcap=capacity;
	double ans=0.0;
	for(int i=0;i<items.size();i++)
	{
		if(items[i].second<=remcap)
		{
			remcap-=items[i].second;
			ans+=items[i].first;
		}
		else
		{
			ans+=(items[i].first)*((double)(remcap)/(items[i].second));
			remcap=0;
			break;
		}
	}
	return ans;
}
int main()
{
	int n,cap;
	std::cout<<"Enter the Number of items"<<std::endl;
	std::cin >> n;
	std::cout<<"Enter the Maximum Capacity of the Knapsack"<<std::endl;
	std::cin>>cap;
	vector<pair<int,int>>items;
	for(int i=1;i<=n;i++)
	{
		std::cout<<"Enter the Price and Weight for item: "<<i<<std::endl;
		int price,weight;
		std::cin>>price>>weight;
		items.push_back({price,weight});
	}
	std::cout<<"Maximum Profit is: "<<fKnap(items,cap)<<std::endl;
}
