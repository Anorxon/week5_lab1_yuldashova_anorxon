#include <iostream>
using namespace std;

int main() {
    int i, sum;
    sum = 0;
    i = 1;
    while ( i <= 100 ) {
        if ( i % 5 != 0)
            cout << i << endl;
            i = i + 1;
            continue;

    }
    cout << sum << endl;
    return 0;
}