#include <iostream>
#include <fstream>

using namespace std;

long long Fibonaci(int a) {
	long long Fibonaci[100];
	Fibonaci[0] = 0;
	Fibonaci[1] = 1;
	Fibonaci[2] = 1;
	for (auto i = 3; i <= a; i++) {
		Fibonaci[i] = Fibonaci[i - 1] + Fibonaci[i - 2];
	}
	return Fibonaci[a];
}

int main()
{
	int a;
	ifstream failas;
	failas.open("14.in", ios::binary | ios::in);
	failas >> a;
	failas.close();
	ofstream rezultatai;
	rezultatai.open("14.txt");
	rezultatai << Fibonaci(a);
	rezultatai.close();
	return 0;
}
