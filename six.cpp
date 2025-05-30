#include <iostream>
#include <iomanip>
#include <queue>

#define SIZE 2

struct Person {
    char name[50];
    int flavor;
} p;

class ADTqueue {
    public:
        ADTqueue(){
            std::cout << "Do you know that the flavor of ice cream can reveal one's personality?" << std::endl;
        }

        void collectData (Person &p) {
            std::cout << "\nEnter name: ";
            std::cin >> p.name;
            std::cout << "Enter favourite flavour: \n(1=chocolate 2=vanilla 3=strawberry 4=mixed flavor)" << std::endl;
            std::cin >> p.flavor;
            std::cin.ignore();
        }

        void check (Person &p) {
            std::cout << std::left << std::setw(10) << p.name;
            switch (p.flavor) {
                case 1:
                    std::cout << "Sensitive and often daydreaming about past and future." << std::endl;
                    break;
                case 2:
                    std::cout << "Friendly, easygoing and has many friends." << std::endl;
                    break;
                case 3:
                    std::cout << "Affectionate, giving, loving and very understanding." << std::endl;
                    break;
                case 4:
                    std::cout << "Negotiator and will do anything to avoid open conflict." << std::endl;
                    break;
                default:
                    break;
            }
        }
} q;

int main () {
    std::queue <Person*> qP;

    for (int i = 0; i < SIZE; i++) {
        Person* o = new Person;
        q.collectData(*o);
        qP.push(o);
    }

    for (int i = 0; i < SIZE; i++) {
        q.check(*qP.front());
        delete qP.front();
        qP.pop();
    }

    system("pause");

    return 0;
}

