#include <iostream>

using namespace std;

void selection_sort (int a[], int length) {
    for (int i = 0; i < (length-1); i++) {
        int min_pos = i;
        // searching for the smallest element in the arr to swap with later
        for (int j = i + 1; j < length; j++) {
            if (a[j] < a[min_pos]) { 
                min_pos = j;
            }
        }
        // only if a[j] < a[min_pos] happened
        if (min_pos != i) { // swapping 
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        } 
    }
}

int main () {
    int a[] = {6, 5, 3, 2, 1, 4};
    int length = 6;

    selection_sort(a, length);

    for (int i = 0; i < length; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    system("pause");

    return 0;
}


