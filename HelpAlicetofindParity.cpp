#include <iostream>

using namespace std;

int main() {
    long long startNum, endNum;
    cin >> startNum >> endNum;

    // Calculate total odd numbers within the given range
    long long totalOdds = (endNum + 1) / 2 - (startNum / 2);

    if (totalOdds % 2 == 0) {
        cout << "even";
    } else {
        cout << "odd";
    }

    return 0;
}