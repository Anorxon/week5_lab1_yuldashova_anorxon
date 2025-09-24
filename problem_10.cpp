#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n;
    cout << "Enter numbers (0 to stop) :\n ";
    cin >> n;
    int max = INT32_MIN;
    while (true) {
        std::cin >> n;

        if (n == 0) {
            break;
        }

        if (n> max) {
            max = n;
        }
    }

    if (max == INT32_MIN) {
        cout << "No numbers were entered.\n";
    } else {
        cout << "Maximum number entered: " << max << endl;
    }

}