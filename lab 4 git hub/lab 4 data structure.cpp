#include <iostream>
using namespace std;

int main() {
    int n, serialNumber, found = 0;

    cout << "Enter number of antique items: ";
    cin >> n;

    int items[n];

    cout << "Enter serial numbers of antique items:\n";
    for (int i = 0; i < n; i++) {
        cin >> items[i];
    }

    cout << "Enter the serial number of the vintage pocket watch to search: ";
    cin >> serialNumber;

    for (int i = 0; i < n; i++) {
        if (items[i] == serialNumber) {
            cout << "Vintage pocket watch found at position " << i + 1 << "." << endl;
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Pocket watch with serial number " << serialNumber << " not found in the inventory." << endl;

    return 0;
}

