#include <iostream>
#include <string>
using namespace std;
//Лаба 7 (чётные элементы)
int main()
{

	setlocale(LC_ALL, "rus");
	system("color F4");

	cout << "Введите строку, состоящую из цифр" << endl;
	string strok, resultat = "Ваши четные символы строки: ";

	getline(cin, strok); //счёт номера нужных символов

	for (int z = 0; z < strok.size(); z++) //счёт символов в сроке

		if ((strok[z] - '0') % 2 != 1) // конец строки
			resultat += strok[z]; // Просмотр строки

	cout << resultat << endl;

	system("pause");
	return 0;

}