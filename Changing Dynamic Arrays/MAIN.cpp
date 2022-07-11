#include<iostream>

//������� ��������� ��� ������ ������������� �������
void FillArray(int* const arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

//������� �������� ������������ ������ �� �����
void ShowArray(const int* const arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << "  ";
	}
	std::cout << std::endl;
}

//������� �������� �������� ������ ������������� ������� � ������
void CopyArray(int*& arr1, const int* const arr2, int const& size)
{
	delete[]arr1;
	arr1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];
	}
}

//������� ��������� ��� ���� ������� ������� � ���� ���������
void PushBackArray(int*& arr, int& size, int value)
{

	int* NewArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		NewArray[i] = arr[i];
	}

	NewArray[size] = value;
	size++;
	delete[]arr;
	arr = NewArray;
}

//������� ��������� ���� ������� �� �������� � ������ ������������� �������
void PushFrontArray(int*& arr, int& size, int value) 
{
	int *NewArray = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		NewArray[i + 1] = arr[i];
	}
	NewArray[0] = value;
	delete[]arr;
	arr = NewArray;
	size++;
}

//������� ������� ��������� ������� ������������� �������
void PopBackArray(int*& arr, int& size) 
{
	int* NewArray = new int[size - 1];
	for (int i = 0; i < size-1; i++)
	{
		NewArray[i] = arr[i];
	}
	delete[] arr;
	arr = NewArray;
	size--;
}


void main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	int size = 5;
	int* arr = new int[size];
	FillArray(arr, size);
	ShowArray(arr, size);
	PushFrontArray(arr, size,777);


	ShowArray(arr, size);
}