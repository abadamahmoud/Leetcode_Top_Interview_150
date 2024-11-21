#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
     bool canConstruct(string ransomNote, string magazine)
     {
          vector<int> freq(26, 0);
          for (char c : magazine)
          {
               freq[c - 'a']++;
          }
          for (char c : ransomNote)
          {
               if (--freq[c - 'a'] < 0)
               {
                    return false;
               }
          }
          return true;
     }
};

int main()
{
     Solution solution;
     string ransomNote = "aa";
     string magazine = "aab";
     cout << (solution.canConstruct(ransomNote, magazine) ? "true" : "false") << endl; // Output: true
     return 0;
}
