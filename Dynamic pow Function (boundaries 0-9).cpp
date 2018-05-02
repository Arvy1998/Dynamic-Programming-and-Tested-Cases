#include <iostream>
#include <fstream>

using namespace std;

ofstream rezultatai;

int laipsnis(int a, int n) {
	int power[10];
	power[0] = 1;
	power[1] = a;
	for (auto i = 2; i <= n; i++) {
		power[i] = power[i - 1] * a;
	}
	return power[n];
}

int main()
{
	int a, n;
	cin >> a >> n;
	cout << laipsnis(a, n);
	return 0;
}
