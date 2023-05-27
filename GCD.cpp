//coded by trinay reddy Malireddy
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
      if(a%b==0)
        return b;
      return gcd(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<ans<<endl;
}
