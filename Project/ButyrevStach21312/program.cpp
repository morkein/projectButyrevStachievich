//main program
#include "feature.h"
#include <iostream>
using namespace std;

int main()
{
	double a, b, result;	//��������� �������
	int choice;
	setlocale(LC_ALL, "rus");

	//���� ����������
	cout << "������� �������� A" << endl;
	cin >> a;
	cout << "������� �������� B" << endl;
	cin >> b;

	//���� ��������
	cout << "������� ����� ���������� ��������:" << endl;
	cout << "1. ��������" << endl << "2. ���������" << endl;
	cout << "3. ���������" << endl << "4. �������" << endl;
	cin >> choice;

	system("pause");
	return 0;
}