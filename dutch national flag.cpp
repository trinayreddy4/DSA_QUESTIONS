/* Coded by TRINAYREDDY MALIREDDY*/
/* Problem statement: Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
 	this is also called as Dutch national flag algorithm*/
/* problem link:https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&sortBy=submissions */
#include<bits/stdc++.h>
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
        	if(a[mid]==0)
        	{
        		swap(a[low],a[mid]);
        		low++;
        		mid++;
			}
			else if(a[mid]==1)
			{
				mid++;
				
			}
			else if(a[mid]==2)
			{
				swap(a[mid],a[high]);
				high--;
			}
		}
    }
    
};