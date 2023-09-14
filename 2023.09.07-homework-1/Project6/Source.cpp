#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << (a * (a / b) + b * (b / a)) / (a / b + b / a);
	return 0;
}