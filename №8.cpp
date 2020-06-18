//8. Напишите функцию revers с использованием адресной арифметики для строки.

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void revers(char s[])
{
	int l = strlen(s);
	for (int i = 0, j = l - 1; i<l / 2, j>l / 2; i++, j--)
		swap(*(s + i), *(s + j));
	cout << s << endl;
}

int main()
{
	char s[100];
	cin.getline(s, 100);
	revers(s);

	system("pause");
}