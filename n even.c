#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the value of N: ";
    cin >> n;

    cout << "The first " << n << " even numbers are:" << endl;

    for (int i = 1; i <= n; i++) {
        cout << 2 * i << " ";
    }

    cout << endl;

    return 0;
}

