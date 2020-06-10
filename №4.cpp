//4. Напишите функцию copy(char *s, char *t) копирования строки t в строку s, используя указатели.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "PMI";
	string temp(name.length(), '\0');
	int i = 0;
	for (; i < name.length(); ++i)
	{
		temp[i] = name[i];
	}
	cout << name << endl;     //gives the output PMI
	cout << temp << endl;     //gives blank
	for (int i = 0; i < name.length(); ++i)
	{
		cout << temp[i];    //gives output char by char
	}
	system("pause");
}
