#include<bits/stdc++.h>
using namespace std;
void iskthbitset(int n,int k)
{
    int x=(1<<(k));

    if((x&n)!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    iskthbitset(n,k);
}