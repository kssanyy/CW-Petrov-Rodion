#include <iostream>
#include <string>
using namespace std;

int main() {
    string txt;
    int count = 0;

    cout << "Строка: ";
    getline(cin, txt);

    for (int i = 0; i < txt.length(); i++) {
        char n = txt[i];

        if (n == 'a' || n == 'A' || n == 'e' || n == 'E' || n == 'i' || n == 'I' || n == 'o' || n == 'O' || n == 'u' || n == 'U') {
            count++;
        }
    }

    cout << "Количество гласных: " << count << endl;

    return 0;
}