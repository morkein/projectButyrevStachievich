//main program
//version 1.0
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

	//�������� �����
	switch (choice)
	{
	case 1: cout << "������� � ����������" << endl; //��������
	case 2: cout << "������� � ����������" << endl; //���������
	case 3:	cout << "������� � ����������" << endl; //���������
	case 4: cout << "������� � ����������" << endl; //�������
	}


	system("pause");
	return 0;
}