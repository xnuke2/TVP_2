#include "Functions.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите строку для проверки:" << endl;
	string alg;
	getline(cin, alg);
	if (alg == "") {
		cout << "Пустая строка";
		return;
	}
	regex pattern("[123]*");
	if (!regex_match(alg, pattern)) {
		cout << "Строка не содержит только символы 1, 2 или 3" << endl;
		return;
	}
	char* a = new char[alg.size() + 1];
	int s = alg.size();
	alg.copy(a, alg.length());
	a[alg.length()] = '\0';
	int i = 0;
	string st("S");
	string* res = &st;
	if (a[i] == '1') {
		*res += "A";
		i++;
		if (repeata(a, i, res, s)) cout << *res + " - Принадлежит автомату" << endl; else cout << *res + " - Не принадлежит автомату" << endl;

	}else if (a[i] == '2') {
		*res += "C";
		i++;
		if (repeatc(a, i, res, s)) cout << *res + " - Принадлежит автомату"<<endl; else cout << *res + " - Не принадлежит автомату" << endl;
	}else if (a[i] == '3') {
		*res += "B";
		i++;
		if (repeatb(a, i, res, s)) cout << *res + " - Принадлежит автомату" << endl; else cout << *res + " - Не принадлежит автомату" << endl;
	}

}
