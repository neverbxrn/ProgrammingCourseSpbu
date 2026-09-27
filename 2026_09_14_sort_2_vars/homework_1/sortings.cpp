#include <iostream>

#include "sortings.hpp"
#include "io.hpp"

void list_sorts::my_sort(int *arr, const int size) {
    bool sorted = false;
    int counter = 0;

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

                    list_io::cout_list(arr, size);

                    break;
                }
            }
        }

        counter++;
        std::cout << counter << std::endl;
    }
}
