#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
     bool (*isPalindrome)(char *);
     bool (*isAlphanumeric)(char);
} ValidPalindrome;

bool isAlphanumeric(char c)
{
     return isalnum(c);
}

bool isPalindrome(char *s)
{
     int left = 0, right = strlen(s) - 1;
     while (left < right)
     {
          while (left < right && !isAlphanumeric(s[left]))
               left++;
          while (left < right && !isAlphanumeric(s[right]))
               right--;
          if (tolower(s[left]) != tolower(s[right]))
          {
               return false;
          }
          left++;
          right--;
     }
     return true;
}

int main()
{
     ValidPalindrome validator = {isPalindrome, isAlphanumeric};
     char s[] = "A man, a plan, a canal: Panama";
     printf("%s\n", validator.isPalindrome(s) ? "true" : "false"); // Output: true
     return 0;
}
