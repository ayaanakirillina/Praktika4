/*6.Напишите функцию, которая возвращает ссылку на максимальный из трех своих аргументов.
Используя ее, замените значение максимального из трех чисел их средним значением.*/

#include<iostream>

using namespace std;

void max(float &a, float &b, float &c, float *&m)
{
	if (b > (*m) && b > c)
		m = &b;
	if (c > (*m) && c > b)
		m = &c;
}

int main()
{
	float a, b, c;
	float* m;
	cout << "Vvedite a,b,c: ";
	cin >> a >> b >> c;
	m = &a;
	cout << m << endl;
	max(a, b, c, m);
	*m = (a + b + c) / 3;
	cout << "a=" << a << endl << "b=" << b << endl << "c=" << c << endl;

	system("pause");
}
