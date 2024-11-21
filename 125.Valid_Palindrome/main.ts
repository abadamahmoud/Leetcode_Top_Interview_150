class ValidPalindrome {
     public isPalindrome(s: string): boolean {
         let left = 0, right = s.length - 1;
         while (left < right) {
             while (left < right && !this.isAlphanumeric(s[left])) left++;
             while (left < right && !this.isAlphanumeric(s[right])) right--;
             if (this.toLower(s[left]) !== this.toLower(s[right])) {
                 return false;
             }
             left++;
             right--;
         }
         return true;
     }
 
     private isAlphanumeric(c: string): boolean {
         const code = c.charCodeAt(0);
         return (code >= 48 && code <= 57) || (code >= 65 && code <= 90) || (code >= 97 && code <= 122);
     }
 
     private toLower(c: string): string {
         return c >= 'A' && c <= 'Z' ? String.fromCharCode(c.charCodeAt(0) + 32) : c;
     }
 }
 
 const validator = new ValidPalindrome();
 const s = "A man, a plan, a canal: Panama";
 console.log(validator.isPalindrome(s)); // Output: true
 