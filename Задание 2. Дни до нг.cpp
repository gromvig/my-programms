#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int day, month,k,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12;
	m1 = 31;
	m2 = m1 + 28;
	m3 = m2 + 31;
	m4 = m3 + 30;
	m5 = m4 + 31;
	m6 = m5 + 30;
	m7 = m6 + 31;
	m8 = m7 + 31;
	m9 = m8 + 30;
	m10 = m9 + 31;
	m11 = m10 + 30;
	cout << "Введите месяц и день:" << endl;
	cin >> month >> day;
	if (month < 1 || month > 12) {
		cout << ("Неправильно введён месяц");
			return(0);
	}
	if (day < 1 ||  day > 31 || ((month == 4|| month == 6|| month == 9|| month == 11) && (day > 30)) || (month == 2 && day > 28)) {
		cout << ("Неправильно введён день");
		return(0);
	}
	switch (month) {
	case(1): k = 366 -  day; break;
	case(2): k = 366 - (m1 + day); break;
	case(3): k = 366 - (m2 + day); break;
	case(4): k = 366 - (m3 + day); break;
	case(5): k = 366 - (m4 + day); break;
	case(6): k = 366 - (m5 + day); break;
	case(7): k = 366 - (m6 + day); break;
	case(8): k = 366 - (m7 + day); break;
	case(9): k = 366 - (m8 + day); break;
	case(10): k = 366 - (m9 + day); break;
	case(11): k = 366 - (m10 + day); break;
	case(12): k = 366 - (m11 + day); break;
	}
	cout << k;
	return(0);
	system("pause");

}