#include <iostream>
#include <string>
using namespace std;
//���� 7 (������ ��������)
int main()
{

	setlocale(LC_ALL, "rus");
	system("color F4");

	cout << "������� ������, ��������� �� ����" << endl;
	string strok, resultat = "���� ������ ������� ������: ";

	getline(cin, strok); //���� ������ ������ ��������

	for (int z = 0; z < strok.size(); z++) //���� �������� � �����

		if ((strok[z] - '0') % 2 != 1) // ����� ������
			resultat += strok[z]; // �������� ������

	cout << resultat << endl;

	system("pause");
	return 0;

}