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

void main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));










}