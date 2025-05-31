#include <iostream>
#include <iomanip>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class LinkedQueue {
    public:
        LinkedQueue () {};

        void push (int &input, Node*& array) {
            Node* new_node = new Node();
            new_node->data = input;
            new_node->next = nullptr;
            if (!array) {
                new_node->prev = nullptr;
                array = new_node;
            } else if (array) {
                Node* temp = array;
                while (temp->next != nullptr) {
                    temp = temp->next;
                }
                new_node->prev = temp;
                temp->next = new_node;
            }
        }
        void sum (Node*& array) {
            int sum = 0;
            Node* temp = array;
            while (temp) {
                sum += temp->data;
                temp = temp->next;
            }
            std::cout << "The sum of the integers is :\n" << sum << std::endl;
        }
        void display (Node*& array) {
            Node* temp = array;
            std::cout << "The integers that were append onto the queue are:" << std::endl;
            while (temp) {
                std::cout << std::left << std::setw(5) << temp->data;
                temp = temp->next;
            }
        }
}linkedQ;

int main () {
    Node* array = nullptr;
    int size;

    std::cout << "How many integers you want to append into the queue? ";
    std::cin >> size;

    std::cout << "\n";
    for (int i = 0; i < size; i++) {
        int input;
        std::cout << "Enter integer " << i+1 << " to the queue : ";
        std::cin >> input;
        std::cin.ignore();
        linkedQ.push(input, array);
    }

    std::cout << "\n";
    linkedQ.display(array);

    std::cout << "\n";
    linkedQ.sum(array);

    system("pause");
    return 0;
}

