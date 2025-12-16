#include <iostream>

using namespace std;

int main() {
    double n1, n2, answer;
    char opersymbol;

    cout << "Первое число: ";
    cin >> n1;
    cout << "Второе число: ";
    cin >> n2;
    cout << "Операция (+, -, *, /): ";
    cin >> opersymbol;

    if (opersymbol == '+') {
        answer = n1 + n2;
    } else if (opersymbol == '-') {
        answer = n1 - n2;
    } else if (opersymbol == '*') {
        answer = n1 * n2;
    } else if (opersymbol == '/') {
        if (n2 != 0) {   
            answer = n1 / n2;
        } else {
            cout << "деление на ноль" << endl;
            return 1;
        }
    }

    cout << "Ответ: " << answer << endl;

    return 0;
}