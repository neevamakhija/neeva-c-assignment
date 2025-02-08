#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Size of square? : ";
    cin >> n;

    int arr[n][n];
    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = num++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    
    return 0;
}
