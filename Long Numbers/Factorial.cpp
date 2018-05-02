#include<iostream>
using namespace std;

void LongSand(int A[], int b);

int main()
{
  int n;
  int A[10000]={1,1};
  cin >> n;
  for (int i=2;i<=n;i++)
  {
     LongSand(A,i);
  }
  for(int i=A[0]; i>=1; i--) cout << A[i];
  cout << endl;
  return 0;
}
