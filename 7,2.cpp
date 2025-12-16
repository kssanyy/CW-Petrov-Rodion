#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream txtfile("input.txt");
    string line;

    cout << "файл содержит: " << endl;

    while (getline(txtfile, line)) {
        cout << line << endl;
    }

    txtfile.close();

    return 0;
}