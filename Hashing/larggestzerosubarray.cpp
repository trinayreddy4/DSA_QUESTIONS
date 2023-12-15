#include <bits/stdc++.h>
using namespace std;

int largestZeroSubarray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
     arr[i] = (arr[i] == 0) ? -1 : 1;
     //1 1 1 -1 1 -1 1 1 1 9
    unordered_map<int, int> ump;
    int sum = 0, maxLen = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i]; //1 2 3 2 3 2 3
        if(sum == 0)
         maxLen = i+1;
         
        if(ump.find(sum+n) != ump.end())
        {
            if(maxLen < i - ump[sum+n]) // 3-1  4-2 5-1 6-2
             maxLen = i - ump[sum+n];// 2 4 
             
        }
        else ump[sum + n] = i; //10->0 11->1 12->2 
    }
    
    return maxLen;
}



int main()
{
    int arr[] = {1, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << largestZeroSubarray(arr, n);
}
