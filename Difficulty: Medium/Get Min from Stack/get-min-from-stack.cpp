//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
   stack<int>st1;
   stack<int>st2;
   
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           if(st1.empty())
           return -1;
           else{
               return st2.top();
           }
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(st1.empty())
           return -1;
           else
           {
               int element=st1.top();
               st1.pop();
               st2.pop();
               return element;
           }
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           if(st1.empty())
           {
               st1.push(x);
               st2.push(x);
               
           }
           else{
               st1.push(x);
               st2.push(min(x,st2.top()));
           }
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends