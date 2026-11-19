#include <iostream>
using namespace std;

void checkArmstrong(int num) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";
}

int main() {
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    checkArmstrong(num);

    return 0;
}
