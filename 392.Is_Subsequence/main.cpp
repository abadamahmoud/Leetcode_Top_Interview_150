#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
     bool isSubsequence(string s, string t)
     {
          int sIndex = 0, tIndex = 0;
          while (sIndex < s.size() && tIndex < t.size())
          {
               if (s[sIndex] == t[tIndex])
               {
                    sIndex++;
               }
               tIndex++;
          }
          return sIndex == s.size();
     }
};

int main()
{
     Solution solution;
     string s = "abc";
     string t = "ahbgdc";
     cout << (solution.isSubsequence(s, t) ? "true" : "false") << endl; // Output: true
     return 0;
}
