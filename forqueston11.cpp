#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1, next;
    int sum = a + b;

    cout << "Fibonacci Series: " << a << " " << b << " ";

    for(int i = 3; i <= n; i++) {
        next = a + b;
        cout << next << " ";
        sum += next;

        a = b;
        b = next;
    }

    cout << "\nSum of series = " << sum;

    return 0;
}
