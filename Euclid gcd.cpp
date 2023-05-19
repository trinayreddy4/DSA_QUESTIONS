/* coded by trinay reddy malireddy*/
/* problem link: https://practice.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1 */
//User function Template for C++
class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    // code here
	    if(B==0)
	    return A;
	    return gcd(B,A%B);
	      
	} 
};
