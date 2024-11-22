#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Definition for a single-linked list node
typedef struct ListNode
{
     int val;
     struct ListNode *next;
} ListNode;

// Function to create a new node
ListNode *createNode(int value)
{
     ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
     newNode->val = value;
     newNode->next = NULL;
     return newNode;
}

// Function to check if a linked list has a cycle
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

// Main function to test the solution
int main()
{
     // Create nodes
     ListNode *head = createNode(3);
     head->next = createNode(2);
     head->next->next = createNode(0);
     head->next->next->next = createNode(-4);

     // Create a cycle
     head->next->next->next->next = head->next;

     // Check for cycle
     if (hasCycle(head))
     {
          printf("The linked list has a cycle.\n");
     }
     else
     {
          printf("The linked list does not have a cycle.\n");
     }

     return 0;
}
