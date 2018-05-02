int LongMod(int A[], int b)
{
  int x=0;

  for (int i=A[0]; i>=1; i--)
    x = (x*10+A[i])%b;
  return x;
}
