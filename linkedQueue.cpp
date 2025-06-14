#include <iostream>
#include <iomanip>

struct Node {
    int data;
    Node* next;
};

class LinkedQueue {
    Node* head;
    Node* tail;
    
    public:
        LinkedQueue() : head(nullptr), tail(nullptr) {}

        void enqueue(int value) {
            Node* new_node = new Node{value, nullptr};
            if (!tail) {
                head = tail = new_node;
            } else {
                tail->next = new_node;
                tail = new_node;
            }
        }

        void dequeue() {
            if (!head) {
                std::cout << "Queue is empty.\n";
                return;
            }
            Node* temp = head;
            head = head->next;
            if (!head) tail = nullptr;
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

int main () {
    LinkedQueue linkedQ;
    int size;

    std::cout << "How many integers you want to append into the queue? ";
    std::cin >> size;

    std::cout << "\n";
    for (int i = 0; i < size; i++) {
        int input;
        std::cout << "Enter integer " << i+1 << " to the queue : ";
        std::cin >> input;
        std::cin.ignore();
        linkedQ.enqueue(input);
    }

    std::cout << "\nThe integers that were appended onto the queue are:" << std::endl;
    linkedQ.display();

    std::cout << "\n";
    system("pause");
    return 0;
}

