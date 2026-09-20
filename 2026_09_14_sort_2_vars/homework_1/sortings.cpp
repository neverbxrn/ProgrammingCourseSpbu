#include "sortings.hpp"

void list_sorts::my_sort(int *arr, const int size) {
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
