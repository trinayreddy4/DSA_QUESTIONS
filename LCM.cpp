//coded by trinay reddy Malireddy
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
  if(a%b==0)
    return b;
  return gcd(b,a%b);
}
int lcm(int a,int b)
{
  return (a*b)/gcd(a,b);
}
int main()
{
  int a,b;
  cin>>a>>b;
  cout<<"lcm of "<<a<<" and "<<b<<" is "<<lcm(a,b)<<endl;
}
