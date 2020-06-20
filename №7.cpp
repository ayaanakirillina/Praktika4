/*7. Напишите функции, возвращающие ссылки на максимальный и минимальный элементы массива.
Используйте их для обмена значениями максимального и минимального элементов. */

#include <iostream>
#include <cmath>

using namespace std;

int *maximum(int *A, int n)
{
	int max = A[0], index = 0;
	for (int i = 0; i < n; i++)
		if (A[i] > max)
		{
			max = A[i];
			index = i;
		}
	return &(A[index]);
}
int *minimum(int *A, int n)
{
	int min = A[0], index = 0;
	for (int i = 0; i < n; i++)
		if (A[i] < min)
		{
			min = A[i];
			index = i;
		}
	return &(A[index]);
}

int main()
{
	int n; 
	cout << "Vvedite n: "; 
	cin >> n;
	int *A = new int[n]; cout << "Vvedite massiv: ";
	for (int i = 0; i < n; i++)
	{
		cin >> *(A + i);
		cout << *(A + i) << "\t" << A + i << endl;
	}
	int *max = maximum(A, n); int *min = minimum(A, n);
	cout << "Max element massiva: " << *max << "\nHis link: " << max << endl;
	cout << "Мin element massiva" << *min << "\nHis link: " << min << endl;
	swap(*max, *min);
	cout << "Changed massiv: ";
	for (int i = 0; i < n; i++)
		cout << *(A + i) << " ";
	cout << endl;
	delete[]A;

	system("pause");
}