#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    // Create an unordered map to store the frequencies of elements
    unordered_map<int, int> frequencyMap;

    // Count frequencies of elements in the vector
    for (int i = 0; i < v.size(); i++) {
        frequencyMap[v[i]]++;
    }

    // Find the maximum and minimum frequencies
    int maxFreq = 0, minFreq = v.size();
    for (auto& pair : frequencyMap) {
        maxFreq = max(maxFreq, pair.second);
        minFreq = min(minFreq, pair.second);
    }

    // Find elements with maximum frequency
    vector<int> maxElements;
    for (auto& pair : frequencyMap) {
        if (pair.second == maxFreq) {
            maxElements.push_back(pair.first);
        }
    }

    // Find elements with minimum frequency
    vector<int> minElements;
    for (auto& pair : frequencyMap) {
        if (pair.second == minFreq) {
            minElements.push_back(pair.first);
        }
    }

    // Sort maxElements and minElements
    sort(maxElements.begin(), maxElements.end());
    sort(minElements.begin(), minElements.end());

    return {maxElements[0], minElements[0]};
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> result = getFrequencies(v);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}
