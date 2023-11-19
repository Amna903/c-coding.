#include <iostream>
using namespace std;

void reverseWords() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int n = 0;
    cout<<"Reversed string: ";
    while (str[n] != '\0') {
        n++;
    }

    int start = n - 1;
    int end = n - 1;
    while (start > 0) {
        if (str[start] == ' ') {
            for (int i = start + 1; i <= end; i++) {
                cout << str[i];
            }
            cout << ' ';
            end = start - 1;
        }
        start--;
    }

    for (int i = 0; i <= end; i++) {
        cout << str[i];
    }
}

int main() {
    reverseWords();
    return 0;
}
