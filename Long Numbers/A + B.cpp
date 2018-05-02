void LongSumA_B(int A[], int B[])
{
 int m=max(A[0],B[0]);
 int c=0;
  for (int i=1; i<=m; i++) {
    c = c+A[i]+B[i];
    A[i] = c%10;
    c = c/10;
  }
  if(c>0){
    m=m+1;
    A[m] = c;
  }
  A[0]=m;
}
