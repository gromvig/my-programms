#include<iostream>
#include "������� 1. ���������� �����.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "������� �����:";
	int a;
	cin >> a;
	if ((a > 99 && a < 1000) || (a < -99 && a > -1000)) {
		cout << "�����";
	}
	else { 
	cout << "�������"; }
	return(0);
	system("pause");
	
	


}