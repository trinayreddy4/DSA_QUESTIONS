//coded by trinay reddy Malireddy
#include<bits/stdc++.h>
using namespace std;
bool isprime(int a)
{
  if(a==1)
    return false;
  if(a==2||a==3)
    return true;
  if(a%2==0||a%3==0)
    return false;
  
  for(int i=5;i*i<a;i+=6)
  {
    if(a%i==0||a%(i+2)==0)
      return false;
  }
  return true;
}
int main(){
  int n;
  cin>>n;
  if(isprime(n))
  {
    cout<<n<<" is a prime number"<<endl;
  }
  else
  {
    cout<<n<<" is not a prime number"<<endl;
  }
}
