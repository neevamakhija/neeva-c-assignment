#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  

    string original = str;
    int len = str.length();
    bool isPalindrome = true;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) cout << "String is palindrome!!\n";
    else cout << "String is not a palindrome!!\n";

    // Frequency of characters
    cout << "\nFrequencies:\n";
    for (char ch = 'a'; ch <= 'z'; ch++) {
        int count = 0;
        for (char c : str) {
            if (tolower(c) == ch) count++;
        }
        if (count > 0) cout << ch << ": " << count << endl;
    }

    char symbol;
    cout << "\nEnter the symbol to replace vowels with: ";
    cin >> symbol;

    for (char& c : original) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            c = symbol;
        }
    }

    cout << "Modified string: " << original << endl;

    return 0;
}
