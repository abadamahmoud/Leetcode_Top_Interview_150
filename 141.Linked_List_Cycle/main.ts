class ListNode {
     val: number;
     next: ListNode | null;
     constructor(val?: number, next?: ListNode | null) {
         this.val = val === undefined ? 0 : val;
         this.next = next === undefined ? null : next;
     }
 }
 
 class Solution {
     hasCycle(head: ListNode | null): boolean {
         if (!head || !head.next) return false;
 
         let slow: ListNode | null = head;
         let fast: ListNode | null = head.next;
 
         while (fast && fast.next) {
             if (slow === fast) return true;
             slow = slow.next!;
             fast = fast.next.next!;
         }
 
         return false;
     }
 }
 
 const head = new ListNode(3);
 head.next = new ListNode(2);
 head.next.next = new ListNode(0);
 head.next.next.next = new ListNode(-4);
 
 // Create a cycle
 head.next.next.next.next = head.next;
 
 const solution = new Solution();
 console.log("Has Cycle:", solution.hasCycle(head)); // Output: true
 