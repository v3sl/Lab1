#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double k, x, answer1, answer2, n, xn;
	n = 1; xn = 1000;
	answer2 = 0;
	cin >> k >> x;
	while (abs(xn) > 1 / pow(10, k)) {
		xn = pow(x, n) / (-n);
		answer2 += xn;
		n += 1;
	}
	answer1 = log(1 - x);
	cout << answer1 << '\n';
	cout << answer2 << endl;
	cout << answer1 - answer2;
	return 0;
}