// kadanes algorithm by trinayreddy
#include<stdio.h>
#include<limits.h>
int main()
{
	int n;
	printf("enter the number of elements\n");
	scanf("%d",&n);// read number of elements
	int a[n];
	printf("enter the array elements\n");
	for(int j=0;j<n;j++)
	{
	scanf("%d",&a[j]);
	}
	int maxsum=INT_MIN,curr_sum=0;// maxsum:maximum sum curr_sum:current sum
	for(int i=0;i<n;i++)
	{
		curr_sum+=a[i];
		
		if(curr_sum>maxsum)
		maxsum=curr_sum;
		if(curr_sum<0)
		curr_sum=0;
		
	}
	printf("the largest contiguous sum of array is %d",maxsum);
	
}
