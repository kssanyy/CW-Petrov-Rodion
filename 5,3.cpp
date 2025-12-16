#include <iostream>
using namespace std;

int main() {
    int numb[5];

    for (int i = 0; i < 5; i++) {
        cin >> numb[i];
    }

    bool plndrmcheck = true;
    for (int i = 0; i < 5; i++) {
        if (numb[i] != numb[5 - 1 - i]) {
            plndrmcheck = false;
            break;
        }
    }

    if (plndrmcheck) {
        cout << "является палиндромом" << endl;
    } else {
        cout << "не является палиндромом" << endl;
    }

    return 0;
}