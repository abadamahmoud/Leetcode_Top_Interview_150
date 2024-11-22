class Solution {
     isValid(s: string): boolean {
         const stack: string[] = [];
         for (const char of s) {
             if (char === '(' || char === '{' || char === '[') {
                 stack.push(char); // Push to stack
             } else {
                 if (stack.length === 0) return false;
                 const top = stack.pop()!;
                 if ((char === ')' && top !== '(') || 
                     (char === '}' && top !== '{') || 
                     (char === ']' && top !== '[')) {
                     return false;
                 }
             }
         }
         return stack.length === 0;
     }
 }
 
 const solution = new Solution();
 const s = "({[]})";
 console.log("Is Valid:", solution.isValid(s)); // Output: True
 