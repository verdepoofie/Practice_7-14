#include <iostream>
using namespace std;

void selection (double **array, int size);
void fill(double *array, int size);
void relief(double **array);

int main() {
    int size;
    cout << "Input size of array" << endl;
    cin >> size;
    double *arr = nullptr;
    selection(&arr, size);
    fill(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i];
    relief(&arr);
    return 0;
}

void selection(double **array, int size) {
    double *select = new double[size];
    *array = select;
    delete[](select);
}

void fill(double *array, int size) {
    cout << "Input array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void relief(double **array) {
    delete[](array);
}