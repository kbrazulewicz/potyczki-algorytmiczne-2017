#include <cstdio>
#include <iostream>
using namespace std;

#define DEBUG

#define EVEN(X) (X % 2 == 0)
#define ODD(X) (X % 2 != 0)

#define FOR(E, I) for(auto E = I.begin(); E != I.end(); E++)

const int MAX_N = 250000;
const unsigned long long MAX_K = 1000000000000000000ull;

int main()
{
	unsigned long long n;
	unsigned long long k;
	cin >> n >> k;

	cout << n << " " << k << " " << k * n << endl;

	// test if n generates even number of pairs 
	unsigned long long numberOfPairs = n * (n - 1) / 2;
	if (n % 2 != 0) {
		cout << "NIE" << endl;
	}

	unsigned long long numberOfInversions = n / 2;

	cout << n << " " << k << endl;
	return 0;
}
