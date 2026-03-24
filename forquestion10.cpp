// Print the Fibonacci series up to the required number of terms.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    long long a = 0, b = 1;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << a;                  // Print current term
        if (i < n) cout << ", ";   // Print comma except after last term

        long long next = a + b;    // Calculate next term
        a = b;                     // Shift a forward
        b = next;                  // Shift b forward
    }

    cout << endl;
    return 0;
}
