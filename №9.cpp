//9. �������� ������� ��� ����� � ������ ������� ��������� ������ �������� ����������.

#include <iostream>

using namespace std;

void vvod(int *a, int n)
{
	cout << "������� ������: ";
	for (int i = 0; i < n; i++)
		cin >> *(a + i);
}

void vyvod(int *a, int n)
{
	for (int i = 0; i < n; i++)
		cout << *(a + i) << " ";
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "");

	int n; cout << "������� n: "; cin >> n;
	int *a = new int[n];
	vvod(a, n); vyvod(a, n);

	system("pause");
}