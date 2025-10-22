#include <iostream>
using namespace std;

int main() {
    int studentIDs[10];
    int id, low = 0, high = 9, mid;
    bool found = false;

    cout << "Enter 10 sorted student IDs:\n";
    for (int i = 0; i < 10; i++) {
        cin >> studentIDs[i];
    }

    cout << "Enter the student ID to search: ";
    cin >> id;

    while (low <= high) {
        mid = (low + high) / 2;

        if (studentIDs[mid] == id) {
            cout << "Student found at position " << mid + 1 << endl;
            found = true;
            break;
        }
        else if (studentIDs[mid] < id) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Student with ID " << id << " not found." << endl;

    return 0;
}

