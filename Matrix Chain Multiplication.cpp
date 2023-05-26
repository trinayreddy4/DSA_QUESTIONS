//coded by Trinay Reddy Malireddy
//problem link:https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1?page=1&curated[]=4&sortBy=submissions
class Solution{
public:
    int matrixMultiplication(int n, int p[])
    {
       int m[n][n];
 
    int i, j, k, L, q;
 
    for (i = 1; i < n; i++)
        m[i][i] = 0;
 
    for (L = 2; L < n; L++)
    {
        for (i = 1; i < n - L + 1; i++)
        {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {
                // q = cost/scalar multiplications
                q = m[i][k] + m[k + 1][j]
                    + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
 
    return m[1][n - 1];
    }
};
