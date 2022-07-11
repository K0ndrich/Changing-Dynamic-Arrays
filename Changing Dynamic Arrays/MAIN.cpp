#include<iostream>
//‘ункци€ заполн€ет все €чейки динамического массива
void FillArray(int* const arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
//‘ункци€ ввыводит динамический массви на екран
void ShowArray(const int* const arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "  ";
	}
	std::cout << std::endl;
}

void main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));










}