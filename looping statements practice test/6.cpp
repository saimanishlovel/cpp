#include <iostream>
using namespace std;

void ticket_combinations(int pink, int green, int red, int orange, int target) {
    // Initialize variables to keep track of combinations and minimum number of tickets
    int combinations = 0;
    int min_tickets = INT_MAX;
    // Iterate through all possible combinations of ticket purchases
    for (int i = 0; i <= target/orange; i++) {
        for (int j = 0; j <= target/red; j++) {
            for (int k = 0; k <= target/green; k++) {
                for (int l = 0; l <= target/pink; l++) {
                    int total = i*orange + j*red + k*green + l*pink;
                    if (total == target) {
                        combinations++;
                        min_tickets = min(min_tickets, i+j+k+l);
                        cout << "ORANGE: " << i << " RED: " << j << " GREEN: " << k << " PINK: " << l << endl;
                    }
                }
            }
        }
    }
    cout << "Total combinations: " << combinations << endl;
    cout << "Minimum number of tickets to print: " << min_tickets << endl;
}

int main() {
    int pink, green, red, orange, target;
    cout << "Enter cost of PINK ticket: ";
    cin >> pink;
    cout << "Enter cost of GREEN ticket: ";
    cin >> green;
    cout << "Enter cost of RED ticket: ";
    cin >> red;
    cout << "Enter cost of ORANGE ticket: ";
    cin >> orange;
    cout << "Enter desired amount to be raised: ";
    cin >> target;

    ticket_combinations(pink, green, red, orange, target);
    return 0;
}
#<<