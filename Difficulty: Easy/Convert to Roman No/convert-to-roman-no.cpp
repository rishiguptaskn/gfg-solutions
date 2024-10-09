//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int num ) {
        // code here
string I[]={"","I","II","III","IV","V","VI","VII","VIII","IX"}; 

string X[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};

string C[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};

string M[]={"","M","MM","MMM"};

return  M[num/1000]+C[(num%1000)/100]+X[(num%100)/10]+I[num%10];

}
    
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}
// } Driver Code Ends