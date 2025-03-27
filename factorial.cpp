#include <iostream>

using namespace std;

int factorial(int num)
{
	if(num < 2)
	{
		return 1;
	}

	return num * factorial(num - 1);
}

int main()
{
	int num;
	cout << "Introduzca un n£mero, para hallar su factorial: ";
	cin >> num;
	cout << "El factorial de " << num << " es " << factorial(num) << endl;
	return 0;
}

