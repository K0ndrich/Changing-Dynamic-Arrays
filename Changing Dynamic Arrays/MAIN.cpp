#include<iostream>

//Функция заполняет все ячейки динамического массива
void FillArray(int* const arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

//Функция ввыводит динамический массви на екран
void ShowArray(const int* const arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "  ";
	}
	std::cout << std::endl;
}

//Функция копирует елементы одного динамического массива в другой
void CopyArray(int*& arr1, const int* const arr2, int const& size)
{
	delete[]arr1;
	arr1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];
	}
}

//Функция добавляем еще один елемент массива с моим значением
void PushBackArray(int*& arr, int& size, int value)
{
	size++;
	int* NewArray = new int[size];
	for (int i = 0; i < size - 1; i++)
	{
		NewArray[i] = arr[i];
	}
	NewArray[size-1] = value;
	delete[]arr;
	arr = NewArray;
}


void main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	int size = 5;
	int* arr = new int[size];
	FillArray(arr, size);
	ShowArray(arr, size);
	PushBackArray(arr, size, 25);


	ShowArray(arr, size);
}