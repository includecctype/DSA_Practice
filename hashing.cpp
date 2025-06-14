#include <iostream>
#include <vector>

#define SIZE 100
#define MIN 1000
#define MAX 9999

using namespace std;

int main () {
    vector <int> arr;
    int input;
    int index;

    for (int i = 0; i < 5; i++) {
        reprompt:
        cout << "Enter Key " << i+1 << " : ";
        cin >> input;
        cin.ignore();
        if (input >= MIN && input <= MAX) {
            arr.push_back(input);
        } else {
            cout << "Input out of range: " << endl;
            goto reprompt;
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        index = arr[i] % SIZE;
        cout << "KEY: " << arr[i] << "\t\tHash Index: " << index << endl;
    }

    system("pause");

    return 0;
}

