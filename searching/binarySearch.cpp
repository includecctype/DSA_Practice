#include <iostream>

int binarySearch (int *arr, int& size, int& input) {
    int low = 0;
    int high = size-1;

    int cut = 0;

    while (low <= high) {
        cut = low + (high-low)/2;
        if (input == arr[cut]) {
            return cut+1;
        } else if (input < arr[cut]) {
            high = cut-1;
        } else if (input > arr[cut]) {
            low = cut+1;
        }
    }

    return 0;
}

int main () {
    int user_input;
    int sample_array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(sample_array) / sizeof(sample_array[0]);

    std::cout << "Please enter a number between 0 to 10: ";
    std::cin >> user_input;

    int result = binarySearch(sample_array, size, user_input);

    if (result == 0) {
        std::cout << "Sorry, the index is not found" << std::endl;
    } else if (result != 0) {
        std::cout << "The index is found at " << result-1 << std::endl;
    }

    system("pause");
    return 0;
}




