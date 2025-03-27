#include <iostream>

using namespace std;

int fibonacci(int num)
{
	switch(num)
	{
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
	}
	return fibonacci(num-1) + fibonacci(num - 2);
}

int main()
{
	int num;
	cout << "Cual posición de la serie de fibonacci quieres generar?: ";
	cin >> num;
	cout << "La posición número " << num << " de la serie de fibonacci es " << fibonacci(num) << endl;
	return 0;
}

