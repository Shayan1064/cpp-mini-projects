#include <iostream>
using namespace std;

int main() {
    float c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    float f = (c * 9 / 5) + 32;
    cout << "Fahrenheit: " << f << endl;

    return 0;
}
