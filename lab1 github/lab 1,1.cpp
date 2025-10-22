#include <iostream>
using namespace std;

int main() {
    int marks[10];
    int first, second;

    cout << "Enter 10 marks: ";
    for (int i = 0; i < 10; i++) {
        cin >> marks[i];
    }

    if (marks[0] > marks[1]) {
        first = marks[0];
        second = marks[1];
    } else {
        first = marks[1];
        second = marks[0];
    }

    for (int i = 2; i < 10; i++) {
        if (marks[i] > first) {
            second = first;
            first = marks[i];
        } else if (marks[i] > second && marks[i] != first) {
            second = marks[i];
        }
    }

    cout << "\n1st highest mark = " << first << endl;
    cout << "2nd highest mark = " << second << endl;

    return 0;
}

