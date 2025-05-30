#include <iostream>
#include <vector>

void searching (int search_element, std::vector <int> arr) {
    for (int i = 0; i < arr.size(); i++ ) {
        if ( arr[i] == search_element ) {
            std::cout << "Element found at index " << i << std::endl;
        }
    }
}

int main () {
    int arr_size, search_element;
    std::vector <int> arr;

    std::cout << "Enter array size: ";
    std::cin >> arr_size;
    
    for (int i = 0; i < arr_size; i++) {
        int input;

        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> input;

        arr.push_back(input);

        std::cin.ignore();
    }

    std::cout << "Enter element to search: ";
    std::cin >> search_element;

    searching(search_element, arr);

    system("pause");

    return 0;
}



