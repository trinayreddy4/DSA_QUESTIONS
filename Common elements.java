//coded by trinay reddy
// problem link:https://practice.geeksforgeeks.org/problems/common-elements1132/1?page=2&sortBy=submissions
class Solution
{
    ArrayList<Integer> commonElements(int A[], int B[], int C[], int n1, int n2, int n3) 
    {
        // code here 
       int x = 0;
       int y = 0;
       int z = 0;
       ArrayList<Integer> result = new ArrayList<>();
       while(x<n1 && y<n2 && z<n3){
           if(A[x]==B[y] && B[y]==C[z]){
               result.add(A[x]);
               x++;
               y++;
               z++;
           }
           else if(A[x]<B[y]){
               x++;
           }
           else if(B[y]<C[z]){
               y++;
           }
           else{
               z++;
           }
           if (x>=1 && x<n1){
               int xx = A[x-1];
               while(x<n1 && A[x]==xx){
                   x++;
               }}
           if (y>=1 && y<n2){
               int yy = B[y-1];
               while(y<n2 && B[y]==yy){
                   y++;
               }}
           if (z>=1 && z<n3){
               int zz = C[z-1];
               while(z<n3 && C[z]==zz){
                   z++;
               }}
       }
       return result;
    }
}
