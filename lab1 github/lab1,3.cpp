#include <iostream>
using namespace std;

int main() {
    float marks[6], sum = 0, avg;

    cout << "Enter marks of 6 subjects: ";
    for (int i = 0; i < 6; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    avg = sum / 6;
    cout << "Average = " << avg << endl;

    if (avg > 90)
        cout << "Grade: A+" << endl;
    else if (avg > 80)
        cout << "Grade: A" << endl;
    else if (avg > 70)
        cout << "Grade: B" << endl;
    else if (avg > 60)
        cout << "Grade: C" << endl;
    else if (avg > 50)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}

