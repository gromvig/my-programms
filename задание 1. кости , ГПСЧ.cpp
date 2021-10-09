#include<iostream>
using namespace std;
int random_generate() {
	double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return(static_cast<int>(rand() * fraction * 6 + 1));
}
int main() {
	srand(time(0));
	rand(); //первый пустой вызов для обхода проблемы реализации rand() в VS
	cout << random_generate() << " " << random_generate();
	return(0);
}