#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int A[8]{ 0,0,0,0,0,0,0,0 };
	int a, i;
	i = 7;
	cout << "������� ����� ����� ��  ����������� 10000000" << endl;
	cin >> a;
	while (a > 0) {
		A[i] = a % 10;
		i--;
		a = a / 10;
	}
	switch (A[0]) {
	case 1: cout << "������ ���������"; break;
	}
	switch (A[1]) {
	case 9:cout << " ������ ���������"; break;
	case 8:cout << " ������ ���������"; break;
	case 7:cout << " ���� ���������"; break;
	case 6:cout << " ����� ���������"; break;
	case 5:cout << " ���� ���������"; break;
	case 4:cout << " ������ ��������"; break;
	case 3:cout << " ��� ��������"; break;
	case 2:cout << " ��� ��������"; break;
	case 1:cout << " �������"; break;
	}
	switch (A[2]) {
	case 9:cout << " ���������"; break;
	case 8:cout << " ���������"; break;
	case 7:cout << " �������"; break;
	case 6:cout << " ��������"; break;
	case 5:cout << " �������"; break;
	case 4:cout << " ���������"; break;
	case 3:cout << " ������"; break;
	case 2:cout << " ������"; break;
	case 1:cout << " ���"; break;
	}
	if (A[3] == 0 && A[4] == 0 && A[2] != 0) {
		cout << " �����";
	}
	switch (A[3]) {
	case 9:cout << " ���������"; break;
	case 8:cout << " �����������"; break;
	case 7:cout << " ���������"; break;
	case 6:cout << " ����������"; break;
	case 5:cout << " ���������"; break;
	case 4:cout << " �����"; break;
	case 3:cout << " ��������"; break;
	case 2:cout << " ��������"; break;
	case 1:
		switch (A[4]) {
		case 9: cout << " ������������ �����"; break;
		case 8: cout << " ������������ �����"; break;
		case 7: cout << " ���������� �����"; break;
		case 6: cout << " ����������� �����"; break;
		case 5: cout << " ���������� �����"; break;
		case 4: cout << " ������������ �����"; break;
		case 3: cout << " ���������� �����"; break;
		case 2: cout << " ���������� �����"; break;
		case 1: cout << " ����������� �����"; break;
		case 0: cout << " ������ �����"; break;
		}
	}
	if (A[4] == 0 && A[3] != 1 && A[3] != 0) {
		cout << " �����";
	}

	if (A[3] != 1) {
		switch (A[4]) {
		case 9:cout << " ������ �����"; break;
		case 8:cout << " ������ �����"; break;
		case 7:cout << " ���� �����"; break;
		case 6:cout << " ����� �����"; break;
		case 5:cout << " ���� �����"; break;
		case 4:cout << " ������ ������"; break;
		case 3:cout << " ��� ������"; break;
		case 2:cout << " ��� ������"; break;
		case 1:cout << " ���� ������"; break;
		}
	}
	switch (A[5]) {
	case 9:cout << " ���������"; break;
	case 8:cout << " ���������"; break;
	case 7:cout << " �������"; break;
	case 6:cout << " ��������"; break;
	case 5:cout << " �������"; break;
	case 4:cout << " ���������"; break;
	case 3:cout << " ������"; break;
	case 2:cout << " ������"; break;
	case 1:cout << " ���"; break;
	}
	switch (A[6]) {
	case 9:cout << " ���������"; break;
	case 8:cout << " �����������"; break;
	case 7:cout << " ���������"; break;
	case 6:cout << " ����������"; break;
	case 5:cout << " ���������"; break;
	case 4:cout << " �����"; break;
	case 3:cout << " ��������"; break;
	case 2:cout << " ��������"; break;
	case 1:
		switch (A[7]) {
		case 9: cout << " ������������"; break;
		case 8: cout << " ������������"; break;
		case 7: cout << " ����������"; break;
		case 6: cout << " �����������"; break;
		case 5: cout << " ����������"; break;
		case 4: cout << " ������������"; break;
		case 3: cout << " ����������"; break;
		case 2: cout << " ����������"; break;
		case 1: cout << " �����������"; break;
		case 0: cout << " ������"; break;
		}
	}
	if (A[6] != 1) {
		switch (A[7]) {
		case 9:cout << " ������"; break;
		case 8:cout << " ������"; break;
		case 7:cout << " ����"; break;
		case 6:cout << " �����"; break;
		case 5:cout << " ����"; break;
		case 4:cout << " ������"; break;
		case 3:cout << " ���"; break;
		case 2:cout << " ���"; break;
		case 1:cout << " ����"; break;
		}
	}
	if (A[0] == 0 && A[1] == 0 && A[2] == 0 && A[3] == 0 && A[4] == 0 && A[5] == 0 && A[6] == 0 && A[7] == 0) {
		cout << "����";
	}
	return(0);
	system("pause");
}