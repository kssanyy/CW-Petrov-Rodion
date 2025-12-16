#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int seconds;
    cout << "количество секунд: ";
    cin >> seconds;

    int days = seconds / (24 * 3600);
    seconds %= (24 * 3600);

    int hours = seconds / 3600;
    seconds %= 3600;

    int minutes = seconds / 60;

    cout << setfill('0');
    cout << setw(2) << days << ":" << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << endl;

    return 0;
}