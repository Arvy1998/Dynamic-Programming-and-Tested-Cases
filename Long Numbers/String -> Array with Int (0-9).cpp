void str_to_A(int A[], string s)
{
  A[0]=s.length();
  string s1;
  for (int i=1;i<=s.length();i++)
  {
   //A[i]=s[s.length()-i]-'0';
   s1=s[s.length()-i];
   A[i]=atoi(s1.c_str());
  }
}
