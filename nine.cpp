#include <iostream>
#include <iomanip>

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class LinkedStack {
    Node* node;

    public:
        LinkedStack (Node*& n) {
            this->node = n;
        };

        void push (int &input) {
            Node* new_node = new Node();
            Node* temp = this->node;
            new_node->data = input;
            new_node->next = nullptr;
            if (!this->node) {
                new_node->prev = nullptr;
                this->node = new_node;
                return;
            }
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            new_node->prev = temp;
            temp->next = new_node;
        }

        void pop () {
            Node* temp = this->node;
            if (!this->node) {
                return;
            }
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }
            std::cout << "Number popped: " << temp->next->data << std::endl;
            delete temp->next;
            temp->next = nullptr;
        }

        void display () {
            Node* temp = this->node;
            std::cout << "Data in the stack :" << std::endl;
            while (temp) {
                std::cout << std::left << std::setw(5) << temp->data;
                temp = temp->next;
            }
            std::cout << "\nThank you" << std::endl;
        }
};

void initCout () {
    std::cout << "1 : Push" << std::endl;
    std::cout << "2 : Pop" << std::endl;
    std::cout << "3 : Exit\n" << std::endl;
}

int main () {
    Node* node = nullptr;
    LinkedStack link(node);
    int choice;

    initCout();

    while (choice != 3) {
        std::cout << "Choose operation to perform : ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                int input;
                std::cout << "Enter a number to push : ";
                std::cin >> input;
                std::cin.ignore();
                link.push(input);
                break;
            case 2:
                link.pop();
                break;
            default:
                std::cout << "Invalid input" << std::endl;
                break;                
        }
    }

    link.display();

    system("pause");

    return 0;
}

