//coded by trinay reddy
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
            vector<int>ans;
            int front=0;
            long long sum=0;
            for(int j=0;j<arr.size();j++)
            {
                sum+=arr[j];
                while(sum>s&&front<j)
                {
                    sum=sum-arr[front];
                    front++;
                }
                if(sum==s)
                {
                    ans.push_back(front+1);
                    ans.push_back(j+1);
                    return ans;
                }
                
            }
        ans.push_back(-1);
        return ans;
    }
};
