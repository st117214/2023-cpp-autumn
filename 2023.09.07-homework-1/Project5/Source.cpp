#include <iostream>
using namespace std;
int main()
{
	int V, T, N = 109;
	cin >> V >> T;
	int S = V * T;
	int R = S % N;
	cout << (R + N) % N + 1;
	return 0;
}

	