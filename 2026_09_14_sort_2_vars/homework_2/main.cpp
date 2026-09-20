#include <iostream>

void cout_list(int *arr, const int length);
void str_to_array(const std::string& _string, int arr[]);
void my_sort(int *arr, const int size);


// TODO Интерфейс пользователя должен быть на русском языке
int main() {
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

	str_to_array(input, arr);

	cout_list(arr, count);

	my_sort(arr, count);

	cout_list(arr, count);

	std::cout << "Нажмите Enter для выхода...";
	std::cin.ignore(); // Очищает буфер (если до этого был ввод)
	std::cin.get();

    // TODO Пользователь вводит размер массив и элементы массива

	// TODO вызвается void my_sort(int *arr, int size)
	
	// TODO Выводится первоначальный массив и отсортированный
}

void cout_list(int *arr, const int length) {
	std::cout << '[';

	for (int i = 0; i < length; i++) {
		int x = arr[i];

		if (i != length-1) {
			std::cout << x << ", ";
		}

		else {
			std::cout << x;
		}
	}

	std::cout << ']';

	std::cout << std::endl;
}

void str_to_array(const std::string& _string, int arr[]) {
	int i = 0;
	int last_blank_symb = -1;
	int blank_symb = 0;
	int len = 0;

	for (i; i < _string.length(); i++) {
		if (_string[i] == ' ') {
			blank_symb = i;

			std::string _number = _string.substr(last_blank_symb+1, blank_symb-last_blank_symb);

			int number = std::stoi(_number);

			arr[len] = number;

			len++;
			last_blank_symb = blank_symb;
		}
	}

}

void my_sort(int *arr, const int size) {
	bool sorted = false;

	while (!sorted) {
		sorted = true;

		// std::cout << "zanogo" << std::endl;

		for (int i = size-1; i != 0; i--) {
			int opora = arr[i];

			for (int j = 0; j < i; j++) {
				if (opora < arr[j]) {
					int tk = arr[j];
					arr[j] = opora;
					arr[i] = tk;

					sorted = false;

					// cout_list(arr, size);

					break;
				}
			}
		}
	}
}