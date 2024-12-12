//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string FirstNonRepeating(string &A) {
        // Code here
        string B="";
        queue<char>q;
        vector<int>repeated(26,0);
        for(int i=0;i<A.size();i++){
            if(repeated[A[i]-'a']>=1){
                repeated[A[i]-'a']++;
                while(!q.empty()&& repeated[q.front()-'a']>1)
                q.pop();
                if(q.empty())
                B+='#';
                else
                B+=q.front();
            }
            else{
                repeated[A[i]-'a']++;
                q.push(A[i]);
                while(repeated[q.front()-'a']>1)
                q.pop();
                B+=q.front();
            }
        }
        return B;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string A;
        cin >> A;
        Solution obj;
        string ans = obj.FirstNonRepeating(A);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends