#include<iostream>
using namespace std;
int Fibonacci(int N) {
	int a = 0;
	int b = 1;
	int n;
	if (N == 0) {
		return(0);
	}
	if (N == 1) {
		return(1);
	}
	for (int i = 1; i < N; i++) {
		n = a + b;
		a = b;
		b = n;
	}
	return(n);
}
int main() {
	int N;
	cin >> N;
	cout << Fibonacci(N);
	return(0);
}