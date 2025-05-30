#include <iostream>
#include <stack>
#include <iomanip>

#define SIZE 10

int main () {
    std::stack <int> numbers;
    int even = 0, odd = 0;

    std::cout << "Key in " << SIZE << " numbers : ";
    for (int i = 0; i < SIZE; i++) {
        int input;
        std::cin >> input;
        numbers.push(input);
        std::cin.ignore();
    }

    std::cout << "Numbers entered are : ";
    for (int i = 0; i < SIZE; i++) {
        if (numbers.top() % 2 == 0) {
            even++;
        }
        else if (numbers.top() % 2 == 1) {
            odd++;
        }
        std::cout << std::setw(2) << numbers.top();
        numbers.pop();
    }

    std::cout << "\nThere are " << even << " even numbers and " << odd << " odd numbers." << std::endl;

    system("pause");

    return 0;
}