#include <iostream>
#include <iomanip>

#define SIZE 5

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main () {
    Node* array = nullptr;

    Node* head = array;
    Node* tail = array;

    int search;

    for (int i = 0; i < SIZE; i++) {
        int input;
        std::cout << "Enter data " << i+1 << ": ";
        std::cin >> input;
        std::cin.ignore();

        Node* new_node = new Node();
        new_node->data = input;

        if (!array) {
            new_node->next = nullptr;
            new_node->prev = nullptr;
            array = new_node;
        } else if (array) {
            new_node->next = array;
            new_node->prev = nullptr;
            array->prev = new_node;            
            array = new_node;
        }
    }

    head = array;
    std::cout << "The Current List:" << std::endl;
    while (array->next != nullptr) {
        array = array->next;
    }
    tail = array;
    Node* temp1 = tail;
    array = head;
    while (temp1) {
        std::cout << std::setw(5) << std::left << temp1->data;
        temp1 = temp1->prev;
    }

    std::cout << "\nDeleting the first node" << std::endl;
    std::cout << "The list after deletion:" << std::endl;
    
    Node* temp2 = tail;
    tail = tail->prev;
    tail->next = nullptr;
    delete temp2;

    Node* temp3 = tail;
    while (temp3) {
        std::cout << std::setw(4) << std::left << temp3->data;
        temp3 = temp3->prev;
    }

    std::cout << "\nEnter a data to search: ";
    std::cin >> search;

    while (array) {
        if (array->data == search) {
            std::cout << "DATA FOUND!" << std::endl;
            goto next;
        }
        array = array->next;
    }

    next:

    array = head;

    system("pause");
    return 0;
}

