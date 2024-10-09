//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    /*You are required to complete this method */
    int atoi(string &s) {
        // Your code here
        for( int i=0;i<s.size();i++){
            if(s[i]>65){
                return -1;
            }
        }
        int i=stoi(s);
        return i;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        int ans = ob.atoi(s);
        cout << ans << endl;
    }
}
// } Driver Code Ends