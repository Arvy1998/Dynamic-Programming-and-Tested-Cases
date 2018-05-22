#include <iostream>
#include <algorithm>
#include <vector>  // solution could have included vectors/maps/arrays
#include <map>
#include <array>
#include <cstdio>

#define MAX 100000

using namespace std;

int main() {
  unsigned long long n, m, A[MAX][MAX], B[MAX][MAX]; // kaina, kelio ilgis arba laikas negali buti neigiami dydziai
  cin >> n >> m;
  for (auto i = 1; i <= n; i++) {
    for (auto j = 1; j <= m; j++) {
      cin >> A[i][j];
    }
  }
  B[1][1] = A[1][1];
  
  for (auto i = 2; i <= n; i++) {
  B[i][1] = B[i-1][1] + A[i][1];
  }
  
  for (auto j = 2; j <= m; j++) {
  B[1][j] = B[1][j-1] + A[1][j];
  }
     
  for (auto i = 2; i <= n; i++) {
      for (auto j = 2; j <= m; j++) {
        B[i][j] = min(B[i][j-1], B[i-1][j]) + A[i][j];
      }
  }
        
  cout << B[n][m] << endl;
  cin.get();
  return 0;
 }
 
 /*
 Example of how to find the least length of way/least cost in the matrix. (trumpiausio kelio/maziausios kainos radimas matricoje);
 Pvz:
 
 Turime nukeliauti is X i Y sugaisus maziausiai laiko (laikas pazymetas skaiciais):
 
 X ->  4  1 9 1 100
       1  2 1 1  9
      999 7 9 7 919
       1  9 9 1  2  -> Y
       
  Algoritmas randa skaiciu kombinacija is matricos, kuri duoda maziausia reiksme, keliaujant is X i Y.
  min reiksme = atsakymas;
 */
