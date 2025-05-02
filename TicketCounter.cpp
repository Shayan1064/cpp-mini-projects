#include <iostream>
using namespace std;

int main() {
    cout << "Enter Your name: ";
    string name;
    cin >> name;

    cout << "WELCOME to Ticket Counter, " << name << "!" << endl << endl;

   
    string ticket1 = "Movie";
    int price1 = 1000;
    string ticket2 = "Concert";
    int price2 = 500;
    string ticket3 = "Museum";
    int price3 = 500;
    string ticket4 = "Zoo";
    int price4 = 750;
    string ticket5 = "Bus";
    int price5 = 250;


    cout << "These are the available Tickets:\n" << endl;
    cout << "1. " << ticket1 << " Ticket - Rs. " << price1 << endl;
    cout << "2. " << ticket2 << " Ticket - Rs. " << price2 << endl;
    cout << "3. " << ticket3 << " Ticket - Rs. " << price3 << endl;
    cout << "4. " << ticket4 << " Ticket - Rs. " << price4 << endl;
    cout << "5. " << ticket5 << " Ticket - Rs. " << price5 << endl;

    int totalPrice = 0;
    int choice;
    string Ch = "Yes";

    while (Ch == "Yes" || Ch == "yes") {
        cout << "\nPlease select a ticket (1-5): ";
        cin >> choice;

        if (choice == 1) {
            cout << "You selected: " << ticket1 << " Ticket\n";
            cout << "Price: Rs. " << price1 << endl;
            totalPrice += price1;
        } else if (choice == 2) {
            cout << "You selected: " << ticket2 << " Ticket\n";
            cout << "Price: Rs. " << price2 << endl;
            totalPrice += price2;
        } else if (choice == 3) {
            cout << "You selected: " << ticket3 << " Ticket\n";
            cout << "Price: Rs. " << price3 << endl;
            totalPrice += price3;
        } else if (choice == 4) {
            cout << "You selected: " << ticket4 << " Ticket\n";
            cout << "Price: Rs. " << price4 << endl;
            totalPrice += price4;
        } else if (choice == 5) {
            cout << "You selected: " << ticket5 << " Ticket\n";
            cout << "Price: Rs. " << price5 << endl;
            totalPrice += price5;
        } else {
            cout << "Invalid choice. Please choose between 1 and 5." << endl;
        }

    
        cout << "\nDo you want to select another ticket? (Yes/No): ";
        cin >> Ch;
    }

    cout << "\n" << name << ", your total price is: Rs. " << totalPrice << endl;
    cout << "Thank you for using the Ticket Counter, " << name << "!" << endl;

    return 0;
}
