#include<bits/stdc++.h>
using namespace std;
int CountSetBits(int n)
{
    int res=0;
    while(n>0)
    {
        if(n%2==1)
        {
            res++;
        }
        n=n/2;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int ans=CountSetBits(n);
    cout<<ans<<endl;
}