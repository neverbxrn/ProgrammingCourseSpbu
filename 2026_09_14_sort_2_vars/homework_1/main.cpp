#include <iostream>

#include "convertations.hpp"
#include "io.hpp"
#include "sortings.hpp"

// TODO Интерфейс пользователя должен быть на русском языке
int main() {
    setlocale(LC_ALL, "ru-RU.UTF-8");
	std::cout << "Вводите числа(int) массива, после напишите 's', чтобы закончить" << std::endl;

	bool active = true;
	int count = 0;
	std::string input;
	std::string current;

	while (active == true) {
		std::cin >> current;

		if (current != "s") {
			input += current + " ";

			count++;
		}

		else { active = false; }
	}

	int arr[count];

	list_convs::str_to_array(input, arr);

	list_io::cout_list(arr, count);

	list_sorts::my_sort(arr, count);

	list_io::cout_list(arr, count);

	std::cout << "Нажмите Enter для выхода...";
	std::cin.ignore(); // Очищает буфер (если до этого был ввод)
	std::cin.get();

    // TODO Пользователь вводит размер массив и элементы массива

	// TODO вызвается void my_sort(int *arr, int size)
	
	// TODO Выводится первоначальный массив и отсортированный
}
