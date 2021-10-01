#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int A[8]{ 0,0,0,0,0,0,0,0 };
	int a, i;
	i = 7;
	cout << "¬ведите целое число не  превышающее 10000000" << endl;
	cin >> a;
	while (a > 0) {
		A[i] = a % 10;
		i--;
		a = a / 10;
	}
	switch (A[0]) {
	case 1: cout << "дес€ть миллионов"; break;
	}
	switch (A[1]) {
	case 9:cout << " дев€ть миллионов"; break;
	case 8:cout << " восемь миллионов"; break;
	case 7:cout << " семь миллионов"; break;
	case 6:cout << " шесть миллионов"; break;
	case 5:cout << " п€ть миллионов"; break;
	case 4:cout << " четыре миллиона"; break;
	case 3:cout << " три миллиона"; break;
	case 2:cout << " два миллиона"; break;
	case 1:cout << " миллион"; break;
	}
	switch (A[2]) {
	case 9:cout << " дев€тьсот"; break;
	case 8:cout << " восемьсот"; break;
	case 7:cout << " семьсот"; break;
	case 6:cout << " шестьсот"; break;
	case 5:cout << " п€тьсот"; break;
	case 4:cout << " четыреста"; break;
	case 3:cout << " триста"; break;
	case 2:cout << " двести"; break;
	case 1:cout << " сто"; break;
	}
	if (A[3] == 0 && A[4] == 0 && A[2] != 0) {
		cout << " тыс€ч";
	}
	switch (A[3]) {
	case 9:cout << " дев€носто"; break;
	case 8:cout << " восемьдес€т"; break;
	case 7:cout << " семьдес€т"; break;
	case 6:cout << " шестьдес€т"; break;
	case 5:cout << " п€тьдес€т"; break;
	case 4:cout << " сорок"; break;
	case 3:cout << " тридцать"; break;
	case 2:cout << " двадцать"; break;
	case 1:
		switch (A[4]) {
		case 9: cout << " дев€тнадцать тыс€ч"; break;
		case 8: cout << " восемнадцать тыс€ч"; break;
		case 7: cout << " семнадцать тыс€ч"; break;
		case 6: cout << " шестнадцать тыс€ч"; break;
		case 5: cout << " п€тнадцать тыс€ч"; break;
		case 4: cout << " четырнадцать тыс€ч"; break;
		case 3: cout << " тринадцать тыс€ч"; break;
		case 2: cout << " двенадцать тыс€ч"; break;
		case 1: cout << " одиннадцать тыс€ч"; break;
		case 0: cout << " дес€ть тыс€ч"; break;
		}
	}
	if (A[4] == 0 && A[3] != 1 && A[3] != 0) {
		cout << " тыс€ч";
	}

	if (A[3] != 1) {
		switch (A[4]) {
		case 9:cout << " дев€ть тыс€ч"; break;
		case 8:cout << " восемь тыс€ч"; break;
		case 7:cout << " семь тыс€ч"; break;
		case 6:cout << " шесть тыс€ч"; break;
		case 5:cout << " п€ть тыс€ч"; break;
		case 4:cout << " четыре тыс€чи"; break;
		case 3:cout << " три тыс€чи"; break;
		case 2:cout << " две тыс€чи"; break;
		case 1:cout << " одна тыс€ча"; break;
		}
	}
	switch (A[5]) {
	case 9:cout << " дев€тьсот"; break;
	case 8:cout << " восемьсот"; break;
	case 7:cout << " семьсот"; break;
	case 6:cout << " шестьсот"; break;
	case 5:cout << " п€тьсот"; break;
	case 4:cout << " четыреста"; break;
	case 3:cout << " триста"; break;
	case 2:cout << " двести"; break;
	case 1:cout << " сто"; break;
	}
	switch (A[6]) {
	case 9:cout << " дев€носто"; break;
	case 8:cout << " восемьдес€т"; break;
	case 7:cout << " семьдес€т"; break;
	case 6:cout << " шестьдес€т"; break;
	case 5:cout << " п€тьдес€т"; break;
	case 4:cout << " сорок"; break;
	case 3:cout << " тридцать"; break;
	case 2:cout << " двадцать"; break;
	case 1:
		switch (A[7]) {
		case 9: cout << " дев€тнадцать"; break;
		case 8: cout << " восемнадцать"; break;
		case 7: cout << " семнадцать"; break;
		case 6: cout << " шестнадцать"; break;
		case 5: cout << " п€тнадцать"; break;
		case 4: cout << " четырнадцать"; break;
		case 3: cout << " тринадцать"; break;
		case 2: cout << " двенадцать"; break;
		case 1: cout << " одиннадцать"; break;
		case 0: cout << " дес€ть"; break;
		}
	}
	if (A[6] != 1) {
		switch (A[7]) {
		case 9:cout << " дев€ть"; break;
		case 8:cout << " восемь"; break;
		case 7:cout << " семь"; break;
		case 6:cout << " шесть"; break;
		case 5:cout << " п€ть"; break;
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