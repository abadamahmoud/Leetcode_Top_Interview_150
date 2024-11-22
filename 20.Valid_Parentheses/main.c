#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct Stack
{
     char *data;
     int top;
     int capacity;
} Stack;

// Function to create a stack
Stack *createStack(int capacity)
{
     Stack *stack = (Stack *)malloc(sizeof(Stack));
     stack->data = (char *)malloc(capacity * sizeof(char));
     stack->top = -1;
     stack->capacity = capacity;
     return stack;
}

// Function to push an element onto the stack
void push(Stack *stack, char ch)
{
     stack->data[++stack->top] = ch;
}

// Function to pop an element from the stack
char pop(Stack *stack)
{
     return stack->data[stack->top--];
}

// Function to check if the stack is empty
bool isEmpty(Stack *stack)
{
     return stack->top == -1;
}

// Function to check if the parentheses are valid
bool isValid(char *s)
{
     Stack *stack = createStack(strlen(s));
     for (int i = 0; s[i] != '\0'; i++)
     {
          char c = s[i];
          if (c == '(' || c == '{' || c == '[')
          {
               push(stack, c);
          }
          else
          {
               if (isEmpty(stack))
               {
                    free(stack->data);
                    free(stack);
                    return false;
               }
               char top = pop(stack);
               if ((c == ')' && top != '(') ||
                   (c == '}' && top != '{') ||
                   (c == ']' && top != '['))
               {
                    free(stack->data);
                    free(stack);
                    return false;
               }
          }
     }
     bool result = isEmpty(stack);
     free(stack->data);
     free(stack);
     return result;
}

int main()
{
     char s[] = "({[]})";
     printf("Is Valid: %s\n", isValid(s) ? "true" : "false");
     return 0;
}
