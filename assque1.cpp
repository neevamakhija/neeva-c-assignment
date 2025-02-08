#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void nextPrimeno(int n) {
    int nextno = n + 1;
    while (!isPrime(nextno)) {
        nextno++;
    }
 cout << "The next prime number after " << n << " is " << nextno << ".\n";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        nextPrimeno(n);
    }
    else {
        cout << endl;
        for (int i = 1;i <= n; i++) {
            if (n % i == 0) cout << i << ' ';
        }
    }

    return 0;
}