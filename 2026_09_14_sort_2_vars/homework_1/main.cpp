#include <iostream>

#include "convertations.hpp"
#include "io.hpp"
#include "sortings.hpp"


// TODO Интерфейс пользователя должен быть на русском языке
int main() {
	std::cout << "Введите кол-во чисел массива: " << std::endl;

	int amount = 0;

	std::cin >> amount;

	int *arr = new int[amount];

	if (amount == 0) {
		std::cout << "не" << std::endl;

		std::cout << "Нажмите Enter для выхода..." << std::endl;
		std::cin.ignore(); // Очищает буфер (если до этого был ввод)
		std::cin.get();

		return 0;
	}

    int current = 0;

	for (int i = 0; i < amount; i++) {
		std::cout << "Число i = " << i << ": " << std::endl;

		std::cin >> current;

		arr[i] = current;
	}

	list_io::cout_list(arr, amount);

	list_sorts::my_sort(arr, amount);

	list_io::cout_list(arr, amount);

	std::cout << "Нажмите Enter для выхода..." << std::endl;
	std::cin.ignore(); // Очищает буфер (если до этого был ввод)
	std::cin.get();

	delete[] arr;

    // TODO Пользователь вводит размер массив и элементы массива

	// TODO вызвается void my_sort(int *arr, int size)
	
	// TODO Выводится первоначальный массив и отсортированный
}
