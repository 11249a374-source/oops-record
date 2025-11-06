#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0.0, average;

    cout << "Enter the number of elements: ";
    cin >> n;

    float numbers[n];  // array to store numbers

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        sum += numbers[i];  // add each number to sum
    }

    average = sum / n;  // calculate average

    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
