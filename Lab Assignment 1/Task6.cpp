#include <iostream>
using namespace std;

int main() {
    int arr[10], search;
    bool found = false;

    cout << "Enter 10 Numbers: ";

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Enter Number to Search: ";
    cin >> search;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == search) {
            cout << "Number Found at Position: " << i + 1;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Number Not Found";

    return 0;
}
