#include <iostream>
#include <iomanip>
#include<string>
#include <unordered_map>
using namespace std;

int minOperations(int arr[], int n)
{
    unordered_map<int, int> mp;

    // Traverse through array elements and
    // update frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    // To store the maximum frequency
    // of an element from the array
    int maxFreq = INT_MIN;

    // Traverse through the map and find
    // the maximum frequency for any element
    for (auto x : mp)
        maxFreq = max(maxFreq, x.second);

    // Return the minimum operations required
    return (n - maxFreq);
}

// Driver code
int main()
{
    int input;
    cin >> input;
    while (input--) {
        int n;
        cin >> n;
        int arr[6];

        for (int i = 0;i < n;i++)
        {
            cin >> arr[i];
        }
        cout << minOperations(arr, n);
    }

    return 0;
}