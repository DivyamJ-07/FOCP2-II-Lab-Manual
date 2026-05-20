#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string getWinner(int size, vector<int>& piles) {
    sort(piles.begin(), piles.end(), greater<int>());

    vector<int> filteredPiles;

    for (int i = 0; i < size; ) {
        int currentWeight = piles[i];
        int frequency = 0;

        while (i < size && piles[i] == currentWeight) {
            frequency++;
            i++;
        }

        // Keep up to two instances of the same item
        filteredPiles.push_back(currentWeight);
        if (frequency > 1) {
            filteredPiles.push_back(currentWeight);
        }
    }

    int alexScore = 0;
    int bobScore = 0;

    for (int i = 0; i < filteredPiles.size(); i++) {
        if (i % 2 == 0) {
            alexScore += filteredPiles[i];
        } else {
            bobScore += filteredPiles[i];
        }
    }

    return (alexScore > bobScore) ? "Alex" : "Bob";
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int numPiles;
        cin >> numPiles;

        vector<int> chocolatePiles(numPiles);
        for (int i = 0; i < numPiles; i++) {
            cin >> chocolatePiles[i];
        }

        cout << getWinner(numPiles, chocolatePiles) << "\n";
    }

    return 0;
}