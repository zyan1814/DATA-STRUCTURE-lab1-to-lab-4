#include <iostream>
using namespace std;

int main() {
    int size, num, start, end, mid;
    bool found = false;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements in ascending order: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> num;

    start = 0;
    end = size - 1;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == num) {
            found = true;
            break;
        } else if (arr[mid] < num) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (found)
        cout << "Number found in the array." << endl;
    else
        cout << "Number not found in the array." << endl;

    return 0;
}

