#include <iostream>
using namespace std;

int main() {
    int pin, balance = 1000, choice, amount;
    cout << "Enter PIN: ";
    cin >> pin;

    if (pin != 1234) {
        cout << "Wrong PIN" << endl;
        return 0;
    }

    do {
        cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) cout << "Balance: " << balance << endl;
        else if (choice == 2) {
            cout << "Enter amount: ";
            cin >> amount;
            balance += amount;
        }
        else if (choice == 3) {
            cout << "Enter amount: ";
            cin >> amount;
            if (amount > balance) cout << "Insufficient funds\n";
            else balance -= amount;
        }
    } while (choice != 4);

    cout << "Thank you" << endl;
    return 0;
}
