//Написать функцию, которая ставит по краям двумерного массива 1, а остальные элементы равны 0. Не забудьте удалить динамические объекты
#include <iostream>
#include <ctime>
using namespace std;
void vvod(int** a, int n, int m)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 9 + 1;
		}
}
void result(int** a, int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == 0 || i == n - 1)
			{
				a[i][j] = 1;
			}
			else a[i][j] = 0;
			if (j == 0 || j == m - 1)
			{
				a[i][j] = 1;
			}
		}
	}
}
void vyvod(int** a, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n, m;
	cout << "Vvedite razmer massiva: ";
	cin >> n >> m;
	int** a = new int*[n];
	for (int i = 0; i < m; i++)
		a[i] = new int[m];
	vvod(a, n, m);
	result(a, n, m);
	vyvod(a, n, m);
	system("pause");
}