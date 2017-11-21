#include <cmath>
#include <iostream>
using namespace std;

#undef DEBUG

#define EVEN(X) (X % 2 == 0)
#define ODD(X) (X % 2 != 0)

#define FOR(E, I) for(auto E = I.begin(); E != I.end(); E++)

const int MAX_N = 200000;
long long t[MAX_N];

int main()
{
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}

	for (int i = 1; i <= m; i++) {
		int d; 
		long long time = 0, totalWaitTime = 0;

		cin >> d;

#ifdef DEBUG
			cout << "Oven " << d << endl;
#endif
		for (int j = 0; j < n; j++) {
			time = max(time, t[j] - d) + d;
			totalWaitTime += max(0LL, time - t[j]);
#ifdef DEBUG
			cout << time << endl;
#endif
		}
		cout << totalWaitTime << endl;
	}

	return 0;
}
