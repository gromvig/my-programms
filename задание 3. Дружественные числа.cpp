#include<iostream>
using namespace std;
int sum_del(int x) {
	int sum = 0;
	for (int i = 1; i <= x / 2; i++) {
		if (x % i == 0) {
			sum += i;
			if (sum >= 10000) {
				break;
			}
		}
	}
	return(sum);
}
int main() {
	for (int i = 4; i < 10000; i++) {
		int x = sum_del(i);
		if (x < i) continue;
		if (x < 10000) {
			int y = sum_del(x);
			if (y == i && i < x)  {
				printf("%d %d\n", y, x);
			}
		}

	}
}