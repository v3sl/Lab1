// лаба 1 пример 4 
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double k, x, answer1, answer2, n, xn;
	n = 1; xn = 1000;
	answer2 = 0;
	cin >> k >> x;
	while (true) {
		xn = pow(x, n) / (-n);
		answer2 = answer2 + xn;
		n = n + 1;
		if (abs(xn) <= 1 / pow(10, k)) {
			break;
		}
	}
	answer1 = log10(1 - x);
	cout << answer1 << '\n';
	cout << answer2 << endl;
	cout << answer1 - answer2;
	return 0;
}