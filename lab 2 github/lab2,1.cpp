#include <iostream>
using namespace std;

int stackArr[100];
int n = 100, top = -1;

void push(int val) {
    if (top >= n - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        stackArr[top] = val;
    }
}

void popAndProcess() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return;
    }

    int highest = -999999;
    bool hasEven = false;

    cout << "\nEven numbers (popped from stack): ";

    while (top != -1) {
        int val = stackArr[top];
        top--;

        if (val % 2 == 0) {
            cout << val << " ";
            hasEven = true;
        }

        if (val > highest) {
            highest = val;
        }
    }

    if (!hasEven) {
        cout << "No even numbers found!";
    }

    cout << "\nHighest number entered: " << highest << endl;
}

int main() {
    int count, val;

    cout << "How many numbers do you want to enter? ";
    cin >> count;

    cout << "Enter " << count << " numbers:" << endl;
    for (int i = 0; i < count; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> val;
        push(val);
    }

    popAndProcess();

    return 0;
}

