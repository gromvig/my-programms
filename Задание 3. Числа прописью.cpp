#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int A[8]{ 0,0,0,0,0,0,0,0 };
	int a, i;
	i = 7;
	cout << "Введите целое число не  превышающее 10000000" << endl;
	cin >> a;
	while (a > 0) {
		A[i] = a % 10;
		i--;
		a = a / 10;
	}
	switch (A[0]) {
	case 1: cout << "десять миллионов"; break;
	}
	switch (A[1]) {
	case 9:cout << " девять миллионов"; break;
	case 8:cout << " восемь миллионов"; break;
	case 7:cout << " семь миллионов"; break;
	case 6:cout << " шесть миллионов"; break;
	case 5:cout << " пять миллионов"; break;
	case 4:cout << " четыре миллиона"; break;
	case 3:cout << " три миллиона"; break;
	case 2:cout << " два миллиона"; break;
	case 1:cout << " миллион"; break;
	}
	switch (A[2]) {
	case 9:cout << " девятьсот"; break;
	case 8:cout << " восемьсот"; break;
	case 7:cout << " семьсот"; break;
	case 6:cout << " шестьсот"; break;
	case 5:cout << " пятьсот"; break;
	case 4:cout << " четыреста"; break;
	case 3:cout << " триста"; break;
	case 2:cout << " двести"; break;
	case 1:cout << " сто"; break;
	}
	if (A[3] == 0 && A[4] == 0 && A[2] != 0) {
		cout << " тысяч";
	}
	switch (A[3]) {
	case 9:cout << " девяносто"; break;
	case 8:cout << " восемьдесят"; break;
	case 7:cout << " семьдесят"; break;
	case 6:cout << " шестьдесят"; break;
	case 5:cout << " пятьдесят"; break;
	case 4:cout << " сорок"; break;
	case 3:cout << " тридцать"; break;
	case 2:cout << " двадцать"; break;
	case 1:
		switch (A[4]) {
		case 9: cout << " девятнадцать тысяч"; break;
		case 8: cout << " восемнадцать тысяч"; break;
		case 7: cout << " семнадцать тысяч"; break;
		case 6: cout << " шестнадцать тысяч"; break;
		case 5: cout << " пятнадцать тысяч"; break;
		case 4: cout << " четырнадцать тысяч"; break;
		case 3: cout << " тринадцать тысяч"; break;
		case 2: cout << " двенадцать тысяч"; break;
		case 1: cout << " одиннадцать тысяч"; break;
		case 0: cout << " десять тысяч"; break;
		}
	}
	if (A[4] == 0 && A[3] != 1 && A[3] != 0) {
		cout << " тысяч";
	}

	if (A[3] != 1) {
		switch (A[4]) {
		case 9:cout << " девять тысяч"; break;
		case 8:cout << " восемь тысяч"; break;
		case 7:cout << " семь тысяч"; break;
		case 6:cout << " шесть тысяч"; break;
		case 5:cout << " пять тысяч"; break;
		case 4:cout << " четыре тысячи"; break;
		case 3:cout << " три тысячи"; break;
		case 2:cout << " две тысячи"; break;
		case 1:cout << " одна тысяча"; break;
		}
	}
	switch (A[5]) {
	case 9:cout << " девятьсот"; break;
	case 8:cout << " восемьсот"; break;
	case 7:cout << " семьсот"; break;
	case 6:cout << " шестьсот"; break;
	case 5:cout << " пятьсот"; break;
	case 4:cout << " четыреста"; break;
	case 3:cout << " триста"; break;
	case 2:cout << " двести"; break;
	case 1:cout << " сто"; break;
	}
	switch (A[6]) {
	case 9:cout << " девяносто"; break;
	case 8:cout << " восемьдесят"; break;
	case 7:cout << " семьдесят"; break;
	case 6:cout << " шестьдесят"; break;
	case 5:cout << " пятьдесят"; break;
	case 4:cout << " сорок"; break;
	case 3:cout << " тридцать"; break;
	case 2:cout << " двадцать"; break;
	case 1:
		switch (A[7]) {
		case 9: cout << " девятнадцать"; break;
		case 8: cout << " восемнадцать"; break;
		case 7: cout << " семнадцать"; break;
		case 6: cout << " шестнадцать"; break;
		case 5: cout << " пятнадцать"; break;
		case 4: cout << " четырнадцать"; break;
		case 3: cout << " тринадцать"; break;
		case 2: cout << " двенадцать"; break;
		case 1: cout << " одиннадцать"; break;
		case 0: cout << " десять"; break;
		}
	}
	if (A[6] != 1) {
		switch (A[7]) {
		case 9:cout << " девять"; break;
		case 8:cout << " восемь"; break;
		case 7:cout << " семь"; break;
		case 6:cout << " шесть"; break;
		case 5:cout << " пять"; break;
		case 4:cout << " четыре"; break;
		case 3:cout << " три"; break;
		case 2:cout << " два"; break;
		case 1:cout << " один"; break;
		}
	}
	if (A[0] == 0 && A[1] == 0 && A[2] == 0 && A[3] == 0 && A[4] == 0 && A[5] == 0 && A[6] == 0 && A[7] == 0) {
		cout << "ноль";
	}
	return(0);
	system("pause");
}