#include <iostream>

using namespace std;

int main () {
    int a[] = {4, 8, 1, 5, 9, 0, 2, 7, 3, 6};

    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length-1; j++) { // -1 bcs last element no need to compare
            if (a[j] > a[j+1]) { // swapping
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }

    cout << endl;
    system("pause");

    return 0;
}



