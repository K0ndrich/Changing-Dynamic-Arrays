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

void CopyArray(int*& arr1, int *arr2, int const& size)
{

}
void main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	int size = 5;
	int* arr1 = new int[size];
	int* arr2 = new int[size];

	FillArray(arr1, size);
	FillArray(arr2, size);
	ShowArray(arr1, size);
	ShowArray(arr2, size);
	std::cout << "==================================" << std::endl;

	delete[]arr1;
	arr1 = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];
	}
	ShowArray(arr1, size);
	ShowArray(arr2, size);
	delete[]arr1;
	delete[]arr2;

}