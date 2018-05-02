#include<iostream>
#include<string>
using namespace std;
 void str_to_A(int A[], string s);
 void LongSkA_B(int A[], int B[]);
int main()
{
  string s1,s2;
  int A[100]={0};
  int B[100]={0};
  cin >> s1 >> s2;
  str_to_A(A, s1);
  str_to_A(B, s2);
  LongSkA_B(A, B);
  for(int i=A[0]; i>=1; i--) cout << A[i];
  cout << endl;
  return 0;
}
