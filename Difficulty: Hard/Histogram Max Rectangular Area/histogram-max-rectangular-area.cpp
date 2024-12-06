//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find largest rectangular area possible in a given histogram.
    int getMaxArea(vector<int> &height) {
        // Your code here
         int n= height.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>st;
    
    
        for(int i=0;i<n;i++){
            while(!st.empty()&& height[st.top()]>height[i]){
                right[st.top()]=i;
                st.pop();
            }
            st.push(i);}
            while(!st.empty()){
                right[st.top()]=n;
                st.pop();
            }
        
         for( int i=n-1;i>=0;i--){
            while(!st.empty()&& height[st.top()]>height[i]){
                left[st.top()]=i;
                st.pop();
            }
            st.push(i);}
            while(!st.empty()){
                left[st.top()]=-1;
                st.pop();
            
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,height[i]*(right[i]-left[i]-1));
            
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.getMaxArea(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends