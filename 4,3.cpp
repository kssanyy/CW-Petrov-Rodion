#include <iostream>
#include <iomanip>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Номер члена последовательности: ";
    cin >> n;

    cout << n << "-ый член последовательности = " << fibonacci(n) << endl;

    return 0;
}