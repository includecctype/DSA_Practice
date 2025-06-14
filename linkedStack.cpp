#include <iostream>
#include <iomanip>

struct Node {
    int data;
    Node* next;
};

class LinkedStack {
    Node* head;
    
    public:
        LinkedStack() : head(nullptr) {}

        void push(int value) {
            Node* new_node = new Node{value, head};
            head = new_node;
        }

        void pop() {
            if (!head) {
                std::cout << "Stack is empty.\n";
                return;
            }
            Node* temp = head;
            std::cout << "Number popped: " << temp->data << std::endl;
            head = head->next;
            delete temp;
        }

        void display() {
            Node* temp = head;
            while (temp) {
                std::cout << temp->data << " ";
                temp = temp->next;
            }
            std::cout << std::endl;
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

