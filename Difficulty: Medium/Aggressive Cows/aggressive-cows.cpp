//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:

    bool isPossible(vector<int>& stalls, int n, int k, int mid) {
    int count = 1;  // Place the first cow at the first stall
    int last_position = stalls[0];  // Position of last placed cow

    for (int i = 1; i < n; i++) {
        if (stalls[i] - last_position >= mid) {
            count++;
            last_position = stalls[i];
            if (count == k) return true;  // All cows placed successfully
        }
    }
    return false;
}

// Function to find the largest minimum distance
int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());  // Sort the stall positions
    int n = stalls.size();

    int low = 1;  // Minimum possible distance
    int high = stalls[n - 1] - stalls[0];  // Maximum possible distance
    int result = 0;

    while (low <= high) {
        int mid = (low + high) / 2;  // Check for the middle distance
        if (isPossible(stalls, n, k, mid)) {
            result = mid;  // Update result and search for a larger distance
            low = mid + 1;
        } else {
            high = mid - 1;  // Search for a smaller distance
        }
    }
    return result;
}
    
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends