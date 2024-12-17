//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

    // Function to find the trapped water between the blocks.
  public:
    int trappingWater(vector<int> &heights) {
        // code here
           int n = heights.size();
        if (n == 0) return 0;

    vector<int> leftMax(n), rightMax(n);

    // Compute left maximum for each bar
    leftMax[0] = heights[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], heights[i]);
    }

    // Compute right maximum for each bar
    rightMax[n - 1] = heights[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], heights[i]);
    }

    // Calculate trapped water
    int totalWater = 0;
    for (int i = 0; i < n; i++) {
        totalWater += min(leftMax[i], rightMax[i]) - heights[i];
    }

    return totalWater;
    }
    
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.trappingWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends