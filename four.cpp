#include <iostream>
#include <stack>

#define SIZE 5

int main () {
    std::stack <char> characters;

    std::cout << "Key in five characters : ";
    
    for (int i = 0; i < SIZE; i++) {
        char input;
        std::cin >> input;
        characters.push(input);
        std::cin.ignore();
    }

    std::cout << "The reverse order is" << std::endl;

    for (int i = 0; i < SIZE; i++) {
        std::cout << characters.top() << "\t";
        characters.pop();
    }

    system("pause");

    return 0;
}

