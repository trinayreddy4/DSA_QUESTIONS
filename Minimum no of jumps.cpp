//coded by trinay reddy malireddy
int minjumps(int arr[],int n)
{
  int steps,maxr,jump;
  //maxr=maximum reachable
  steps=arr[0];
  maxr=arr[0];
  jump=1;
  if(arr[0]>=n-1)
    return 1;
  if(n==1)
    return 1;
  if(arr[0]==0)
    return -1;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>=n-1-i)
      return jump+1;
    if(i==n-1)
      return jump;
    steps--;
    maxr=max(maxr,i+arr[i]);
    if(steps==0)
    {
      jump++;
      if(maxr<=i)
        return -1;
      steps=maxr-i;
    }
  }
  return -1;
}
  
