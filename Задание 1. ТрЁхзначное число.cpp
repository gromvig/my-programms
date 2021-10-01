#include<iostream>
#include "Задание 1. ТрЁхзначное число.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Введите число:";
	int a;
	cin >> a;
	if ((a > 99 && a < 1000) || (a < -99 && a > -1000)) {
		cout << "Верно";
	}
	else { 
	cout << "Неверно"; }
	return(0);
	system("pause");
	
	


}