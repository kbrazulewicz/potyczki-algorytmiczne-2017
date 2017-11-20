#include <cstdio>
#include <iostream>
using namespace std;

#define DEBUG

#define EVEN(X) (X % 2 == 0)
#define ODD(X) (X % 2 != 0)

#define FOR(E, I) for(auto E = I.begin(); E != I.end(); E++)

const int MAX_N = 1000000;
const int MAX_A = 201718;
const int LEN_A = MAX_A + 1 + 20; // 20 bits to represent 1000000


int piggybank[LEN_A];

int main()
{
	int n, a_n;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a_n;
		piggybank[a_n]++;
	}

	// table is big enough and will never overflow
	int b = -1;
	for (int i = 0; i <= LEN_A; i++) {
		if (piggybank[i] != 0) {
			b = i;
			if (piggybank[i] > 1) {
				piggybank[i + 1] += piggybank[i] / 2;
				piggybank[i] %= 2;
			}
		}
	}

	cout << b << endl;

	return 0;
}
