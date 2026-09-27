#include <iostream>

void cout_list(int *arr, const int length) {
    std::cout << '[';

    for (int i = 0; i < length; i++) {
        if (i != length - 1) {
            std::cout << arr[i] << ", ";
        } else {
            std::cout << arr[i];
        }
    }

    std::cout << ']' << std::endl;
}

void my_sort(int *arr, const int size) {
    bool sorted = false;
    int counter = 0;

    while (!sorted) {
        sorted = true;

        for (int i = size - 1; i != 0; i--) {
            int opora = arr[i];

            for (int j = 0; j < i; j++) {
                if (opora < arr[j]) {
                    int tk = arr[j];
                    arr[j] = opora;
                    arr[i] = tk;

                    sorted = false;

                    cout_list(arr, size);
                    break;
                }
            }
        }

        counter++;
        std::cout << counter << std::endl;
    }
}

int main() {
    std::cout << "Введите кол-во чисел массива: " << std::endl;

    int amount = 0;
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "не" << std::endl;
        std::cout << "Нажмите Enter для выхода..." << std::endl;
        std::cin.ignore();
        std::cin.get();
        return 0;
    }

    int *arr = new int[amount];

    int current = 0;
    for (int i = 0; i < amount; i++) {
        std::cout << "Число i = " << i << ": " << std::endl;
        std::cin >> current;
        arr[i] = current;
    }

    cout_list(arr, amount);

    my_sort(arr, amount);

    cout_list(arr, amount);

    std::cout << "Нажмите Enter для выхода..." << std::endl;
    std::cin.ignore();
    std::cin.get();

    delete[] arr;

    return 0;
}