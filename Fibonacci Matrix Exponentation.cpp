#include <iostream>
#include <map>

using namespace std;

map <unsigned long long, unsigned  long long> Fib;

unsigned long long fibonaci(unsigned long long n) {
	if (Fib.count(n)) {
		return Fib[n];
	}
	unsigned long long k = n / 2;
	if (n % 2 == 0) {
		return Fib[n] = (fibonaci(k) * fibonaci(k) + fibonaci(k - 1) * fibonaci(k - 1)) % 100000007;
	}
	else {
		return Fib[n] = (fibonaci(k) * fibonaci(k + 1) + fibonaci(k - 1) * fibonaci(k)) % 100000007;
	}
}

int main() {
	unsigned long long n;
	cin >> n;
	Fib[0] = 1;
	Fib[1] = 1;
	if (n == 0) {
		cout << "0"; // RTE
	}
	else {
		cout << fibonaci(n - 1);
	}
}
