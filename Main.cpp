#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void fill_Arr(T arr[], const int lenght, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < lenght; i++)
		arr[i] = rand() % (right - left) + left;
}
template <typename T>
void print_arr(T arr[], const short lenght) {
	std::cout << "( ";
	for (int i = 0; i < lenght; i++)
		std::cout << arr[i] << "  ";
	std::cout << "\b\b )\n";
}
template <typename T>
void arr_add(T*& arr, int& lenght, int num) {
	if (num <= 0)
		return;
	T* tmp = new T[lenght + num]{};
	for (int i = 0; i < lenght; i++)
		tmp[i] = arr[i];
	delete[] arr;
	arr = tmp;
	lenght += num;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Динамическая память
	/*int* pointer = new int;
	*pointer = 7;
	std::cout << "pointer = " << pointer << std::endl;
	std::cout << "* pointer = " << *pointer << std::endl;

	delete pointer; //Освобождение области памяти на которую направлен указатель 
	pointer = nullptr;

	if (pointer == nullptr) {
		pointer = new int;
		*pointer = 15;
		std::cout << "pointer = " << pointer << std::endl;
		std::cout << "* pointer = " << *pointer << std::endl;
	}

	delete pointer;*/




	//Динамические одномерные массивы
	/*std::cout << "Введите размер массива -> ";
	int dsize;
	std::cin >> dsize;
	int* darr = new int[dsize];

	srand(time(NULL));
	for (int i = 0; i < dsize; i++) {
		darr[i] = rand() % 11 + 10;
		std::cout << darr[i] << ' ';

	}
	std::cout << std::endl;

	delete[] darr;*/



	//Динамические двумерные массивы
	/*int rows = 5, cols = 4;
	//int* dmx = new int[rows][cols];//ОШИБКА
	
	//Выделение памяти
	int** dmx = new int*[rows];
	for (int i = 0; i < rows; i++)
		dmx[i] = new int[cols];

	//Освобождение памяти 
	for (int i = 0; i < rows; i++)
		delete[] dmx[i];
	delete[] dmx;*/


	//Задача 1. Увеличение размера массива
	std::cout << "Задача 1. \nВведите размер массива -> ";
	int size1;
	std::cin >> size1;
	int* arr1 = new int[size1];

	fill_Arr(arr1, size1, 1, 11);
	std::cout << "Изначальный массив: \n";
	print_arr(arr1, size1);

	std::cout << "Введите количество новых элементов -> ";
	std::cin >> n;
	arr_add(arr1, size1, n);

	std::cout << "Итоговый масив: \n";
	print_arr(arr1, size1);
	std::cout << std::endl;








	delete[] arr1;
	arr1 = nullptr;


	return 0;
}