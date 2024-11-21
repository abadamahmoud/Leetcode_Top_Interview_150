class Solution {
     public isSubsequence(s: string, t: string): boolean {
         let sIndex = 0, tIndex = 0;
         while (sIndex < s.length && tIndex < t.length) {
             if (s[sIndex] === t[tIndex]) {
                 sIndex++;
             }
             tIndex++;
         }
         return sIndex === s.length;
     }
 }
 
 const solution = new Solution();
 const s = "abc";
 const t = "ahbgdc";
 console.log(solution.isSubsequence(s, t)); // Output: true
 