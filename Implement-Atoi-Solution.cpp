################################################################################  Question  ########################################################################################################################################


Given a string, s, the objective is to convert it into integer format without utilizing any built-in functions. If the conversion is not feasible, the function should return -1.

Note: Conversion is feasible only if all characters in the string are numeric or if its first character is '-' and rest are numeric.

Example 1:

Input:
s = "-123"
Output: 
-123
Explanation:
It is possible to convert -123 into an integer 
and is so returned in the form of an integer
Example 2:

Input:
s = "21a"
Output: 
-1
Explanation: 
The output is -1 as, due to the inclusion of 'a',
the given string cannot be converted to an integer.
Your Task:
You do not have to take any input or print anything. Complete the function atoi() which takes a string s as an input parameter and returns an integer value representing the given string. If the conversion is not feasible, the function should return -1.

|s| = length of string str.
Expected Time Complexity: O( |s| ), 
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ |s| ≤ 10

################################################################################  Solution  ########################################################################################################################################


  //{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int ans=0;
        int n=s.size();
        int j=1;
        int flag=0;
      for(int i=n-1;i>=0;i--){
          
          if(s[i]=='-' && i==0){
              flag++;
          }else if(s[i]>=48 && s[i]<=57){
              int a=s[i]-48;
              
              ans=ans+(a*j);
              j*=10;
          }else
          return -1;
          
      }
      if(flag>0)
      ans=ans*-1;
      return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends
