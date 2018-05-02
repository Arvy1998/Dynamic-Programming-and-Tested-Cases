void LongSkA_B(int A[], int B[])
{
  int c=0;
  for (int i=1; i<=A[0]; i++){
    c = c+A[i]-B[i]+10;
    A[i] = c%10;
    if(c < 10) c=-1; else c=0;
  }
  while(A[A[0]]==0 && A[0]>1) A[0]=A[0]-1;
}
