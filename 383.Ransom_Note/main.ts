class Solution {
     public canConstruct(ransomNote: string, magazine: string): boolean {
         const freq: number[] = new Array(26).fill(0);
         for (const c of magazine) {
             freq[c.charCodeAt(0) - 'a'.charCodeAt(0)]++;
         }
         for (const c of ransomNote) {
             if (--freq[c.charCodeAt(0) - 'a'.charCodeAt(0)] < 0) {
                 return false;
             }
         }
         return true;
     }
 }
 
 const solution = new Solution();
 const ransomNote = "aa";
 const magazine = "aab";
 console.log(solution.canConstruct(ransomNote, magazine)); // Output: true
 