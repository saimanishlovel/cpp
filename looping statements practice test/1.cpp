#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    // Iterate through each row of the pyramid
    for (int i = 1; i <= n; i++) {
        // Print spaces before the first character of the row
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print first and last characters of the row
        cout << "b";

        // Print spaces between the first and last characters
        for (int j = 1; j <= 2*i - 3; j++) {
            if (i == 1 || i == n) {
                cout << "*";
            }
            else if (j == 1 || j == 2*i - 3) {
                cout << "b";
            }
            else {
                cout << "i";
            }
        }

        // Print last character of the row
        cout << "b" << endl;
    }
    return 0;
}
