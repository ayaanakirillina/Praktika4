//2. Написать функцию, которая по заданному n выводит последовательность Фибоначчи.
#include <iostream>
#include <ctime>
using namespace std;
void vvod(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		a[0] = 1;
		a[1] = 1;
		a[i] = a[i - 2] + a[i - 1];
	}
}
void vyvod(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	int n;
	cout << "Vvedite razmer massiva: ";
	cin >> n;
	int* a = new int[n];
	vvod(a, n);
	vyvod(a, n);
	system("pause");
}