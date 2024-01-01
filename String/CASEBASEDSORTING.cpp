#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define all(arr) arr.begin(),arr.end()
#define forin(a) for(auto &i:a)in>>i;
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
    fastread();
	int t;
	cin>>t;
	while(t--)
	{
		 int case1[n];
        string upp = "";
        string low = "";
        //taking 0 = lowercase, 1 = uppercase
        
        for(int i = 0; i < n; i++) {
            if('a' <= str[i] &&  str[i] <='z') {
                case1[i] = 0;
                low += str[i];
            }
            else{
                case1[i] = 1;
                upp += str[i];
            }
        }
        sort(upp.begin(), upp.end());
        sort(low.begin(), low.end());
        int j = 0, k = 0;
        for(int i = 0; i < n; i++) {
            if(case1[i] == 1) {
                str[i] = upp[j];
                j++;
            }
            else{
                str[i] = low[k];
                k++;
            }
        }
        return str;
	}
}




