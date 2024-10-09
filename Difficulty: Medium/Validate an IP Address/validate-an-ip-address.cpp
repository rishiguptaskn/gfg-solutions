//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
      int n =str.size();
      if(n<7 || n>15)
      return false;
      vector<string>parts;
      stringstream ss(str);
      string part;
      while(getline(ss,part,'.')){
          parts.push_back(part);
      }
      if(parts.size()!=4)
      return false;
      for(string part:parts){
               if (part.empty() || part.size() > 3) return false;
          if(part[0]=='0' && part.size()>1)
          return false;
          for(char ch:part)
          {
             if(!isdigit(ch))return false;
              
          }
         int num = stoi(part);
            if (num < 0 || num > 255) 
            return false;
        }


    
    return true;
    
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends