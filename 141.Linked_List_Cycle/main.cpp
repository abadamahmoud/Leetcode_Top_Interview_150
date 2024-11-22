#include <iostream>
using namespace std;

// Definition for a single-linked list node
struct ListNode
{
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
     bool hasCycle(ListNode *head)
     {
          if (!head || !head->next)
               return false;
          ListNode *slow = head;
          ListNode *fast = head->next;
          while (fast && fast->next)
          {
               if (slow == fast)
                    return true;
               slow = slow->next;
               fast = fast->next->next;
          }
          return false;
     }
};

int main()
{
     // Create nodes
     ListNode *head = new ListNode(3);
     head->next = new ListNode(2);
     head->next->next = new ListNode(0);
     head->next->next->next = new ListNode(-4);

     // Create a cycle
     head->next->next->next->next = head->next;

     // Check for cycle
     Solution solution;
     if (solution.hasCycle(head))
     {
          cout << "The linked list has a cycle." << endl;
     }
     else
     {
          cout << "The linked list does not have a cycle." << endl;
     }

     return 0;
}
