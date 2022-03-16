#include <iostream>
using namespace std;

int main() {
    double number;
    cout << "Input any number" << endl;
    cin >> number;
    double *p = new(double), **d_p = new(double*);
    *p = number;
    *d_p = p;
    cout << "Double pointer points at: " << **d_p;
    delete(*d_p);
    delete (d_p);
    return 0;
}
