//Написать функцию, которая заполняет одномерный массив факториалом его индекса.
#include <iostream>
#include <ctime>
using namespace std;
long f(long n)
{
	long f = 1;
	while (n > 1)
	{
		f *= n--;
	}
	return f;
}
int main()
{
	int n;
	cout << "Vvedite razmer massiva: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = f(i);
		cout << a[i] << " ";
	}
	system("pause");
}