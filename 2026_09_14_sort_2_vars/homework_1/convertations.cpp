#include "convertations.hpp"

#include <string>

void list_convs::str_to_array(const std::string& _string, int arr[]) {
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
