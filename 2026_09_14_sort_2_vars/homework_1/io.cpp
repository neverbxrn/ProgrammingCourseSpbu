#include <iostream>
#include "io.hpp"

void list_io::cout_list(int *arr, const int length) {
    std::cout << '[';

    for (int i = 0; i < length; i++) {
        if (i != length-1) {
            std::cout << arr[i] << ", ";
        }

        else {
            std::cout << arr[i];
        }
    }

    std::cout << ']';

    std::cout << std::endl;
}