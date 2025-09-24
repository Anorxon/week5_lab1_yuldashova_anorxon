#include <iostream>
using namespace std;

int main() {
    for (int i=65; i<=90; i++) {
        cout << char(i) << " " ;
        if (i % 5 == 0) {
            cout << endl;
        }

    }
    return 0;
}