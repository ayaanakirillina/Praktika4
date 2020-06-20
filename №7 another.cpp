/*7.Напишите функции, возвращающие ссылки на максимальный и минимальный элементы массива.
Используйте их для обмена значениями максимального и минимального элементов.*/

#include <iostream>

using namespace std;

void minmax(int* a, int*& min, int*& max, int& n)
{
	for (int i = 1; i < n; i++)
	{
		if (a[i] > (*max))
			max = &a[i];
		if (a[i] < (*min))
			min = &a[i];
	}
}

int main()
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int* a = new int[n];
	cout << "Enter massiv: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int *min = &a[0];
	int *max = &a[0];

	minmax(a, min, max, n);

	
	cout << "Max element massiva: " << *max << "\nHis link: " << max << endl;
	cout << "Min element massiva: " << *min << "\nHis link: " << min << endl;
	
	swap(*max, *min);
	cout << "Changed massiv: ";
	for (int i = 0; i < n; i++)
		cout << *(a + i) << " ";
	cout << endl << endl;

	system("pause");
}