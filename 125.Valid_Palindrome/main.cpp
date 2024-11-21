#include <iostream>
#include <cctype>
#include <string>

class ValidPalindrome
{
public:
     bool isPalindrome(const std::string &s)
     {
          int left = 0, right = s.size() - 1;
          while (left < right)
          {
               while (left < right && !isAlphanumeric(s[left]))
                    left++;
               while (left < right && !isAlphanumeric(s[right]))
                    right--;
               if (toLower(s[left]) != toLower(s[right]))
               {
                    return false;
               }
               left++;
               right--;
          }
          return true;
     }

private:
     bool isAlphanumeric(char c)
     {
          return std::isalnum(c);
     }

     char toLower(char c)
     {
          return std::tolower(c);
     }
};

int main()
{
     ValidPalindrome validator;
     std::string s = "A man, a plan, a canal: Panama";
     std::cout << (validator.isPalindrome(s) ? "true" : "false") << std::endl; // Output: true
     return 0;
}
