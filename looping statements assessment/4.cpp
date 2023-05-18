#include <iostream>

using namespace std;

int main() {
    int rubles, machine1, machine2, machine3, plays = 0;
    cin >> rubles >> machine1 >> machine2 >> machine3;

    while (rubles > 0) {
        plays++;
        if (plays % 25 == machine1) {
            rubles += 19;
        }
        if (plays % 120 == machine2) {
            rubles += 79;
        }
        if (plays % 12 == machine3) {
            rubles += 7;
        }
        rubles--;
    }

    cout << plays << endl;

    return 0;
}
