#include <iostream>
#include <ctime>
using namespace std;

void fill_matrix(int **matrix, int lines, int columns);
void show_matrix(int **matrix, int lines, int columns);

int main() {
    int lines, columns;
    cout << "Input lines and columns of matrix" << endl;
    cin >> lines >> columns;
    int **matrix = new (int* [lines]);
    for(int i = 0; i < lines; i++) {
        matrix[i] = new (int [columns]);
    }
    fill_matrix(matrix, lines, columns);
    show_matrix(matrix, lines, columns);
    for(int i = 0; i < lines; i++) {
        delete[](matrix[i]);
    }
    delete[](matrix);
    return 0;
}

void fill_matrix(int **matrix, int lines, int columns) {
    srand(time(0));
    for(int i = 0; i < lines; i++) {
        for(int j = 0; j < columns; j++) {
            matrix[i][j] = rand() % 40 + 10;
        }
    }
}

void show_matrix(int **matrix, int lines, int columns) {
    for(int i = 0; i < lines; i++) {
        for(int j = 0; j < columns; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}