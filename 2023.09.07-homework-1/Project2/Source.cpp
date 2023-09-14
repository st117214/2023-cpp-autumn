#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int b;
	b = abs(N - 1) + 1;
	int K = (N + 1) * b / 2;
	cout << K;
	return 0;
}