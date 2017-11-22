#include <iostream>
using namespace std;

#define DEBUG

#define EVEN(X) (X % 2 == 0)
#define ODD(X) (X % 2 != 0)

#define FOR(E, I) for(auto E = I.begin(); E != I.end(); E++)

const int MAX_N = 2000;

struct square {
	int x, y;
	int size;
} squares[MAX_N];


void mozaika(int n) {
}


int main()
{
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> squares[i].x >> squares[i].y;
		}

		mozaika(n);
	}

	return 0;
}
