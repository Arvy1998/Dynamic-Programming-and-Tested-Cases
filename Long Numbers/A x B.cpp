void LongSand(int A[], int b)
{
 int c=0;
 for (int i=1; i<=A[0]; i++){
      A[i] = A[i]*b+c;
      c = A[i] / 10;
      A[i] = A[i] % 10;
  }
  while(c>0){
    A[0] = A[0]+1;
    A[A[0]] = c % 10;
    c = c / 10;
  }
}
