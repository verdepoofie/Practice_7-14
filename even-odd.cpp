#include <iostream>
using namespace std;

void even_odd_change(int *array, int size);
void int_swap(int *first, int *second);

int main() {
    int size;
    cout << "Input even! size of array" << endl;
    if (size % 2 != 0) {
        cout << "You did not input even size of array";
        return 0;
    }
    cin >> size;
    int *array = new(int[size]);
    for (int i = 0; i < 12; i++) {
        array[i] = i + 1;
        cout << array[i] << "\t";
    }
    even_odd_change(array, size);
    cout << endl;
    for (int i = 0; i < 12; i++) {
        cout << array[i] << "\t";
    }
    delete[](array);
    return 0;
}

void even_odd_change(int *array, int size) {
    for (int i = 0; i < size - 1; i += 2) {
            int_swap(&array[i], &array[i + 1]);
    }
}

void int_swap(int *first, int *second) {
    int buf = 0;
    buf = *first;
    *first = *second;
    *second = buf;
}