#include <iostream>

using namespace std;

void insertion_sort (int a[], int length);

int main () {
    int a[] = {8, 2, 7, 4, 5, 1, 9, 3};
    int length = 8;

    insertion_sort(a, length);

    for (int i = 0; i < length; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    system("pause");

    return 0;
}

void insertion_sort (int a[], int length) {
    for (int i = 1; i < length; i++) { // start from 2nd element as 1st element is sorted by default
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) { // loop check all the prev values
            a[j+1] = a[j]; // shifting the elements to the next column
            j = j-1; // check next
        } 
        a[j+1] = key; // At last a[j] < key, INSERT the key. j+1 bcs of the previous j = j-1
    }
}