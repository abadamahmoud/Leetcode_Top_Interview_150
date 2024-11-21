#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
     bool (*isSubsequence)(const char *, const char *);
} Solution;

bool isSubsequence(const char *s, const char *t)
{
     int sIndex = 0, tIndex = 0;
     int sLen = strlen(s), tLen = strlen(t);
     while (sIndex < sLen && tIndex < tLen)
     {
          if (s[sIndex] == t[tIndex])
          {
               sIndex++;
          }
          tIndex++;
     }
     return sIndex == sLen;
}

int main()
{
     Solution solution = {isSubsequence};
     const char *s = "abc";
     const char *t = "ahbgdc";
     printf("%s\n", solution.isSubsequence(s, t) ? "true" : "false"); // Output: true
     return 0;
}
