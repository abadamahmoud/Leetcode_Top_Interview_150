#include <stdio.h>
#include <stdbool.h>

typedef struct
{
     bool (*canConstruct)(char *, char *);
} Solution;

bool canConstruct(char *ransomNote, char *magazine)
{
     int freq[26] = {0};
     while (*magazine)
     {
          freq[*magazine - 'a']++;
          magazine++;
     }
     while (*ransomNote)
     {
          if (--freq[*ransomNote - 'a'] < 0)
          {
               return false;
          }
          ransomNote++;
     }
     return true;
}

int main()
{
     Solution solution = {canConstruct};
     char ransomNote[] = "aa";
     char magazine[] = "aab";
     printf("%s\n", solution.canConstruct(ransomNote, magazine) ? "true" : "false"); // Output: true
     return 0;
}
