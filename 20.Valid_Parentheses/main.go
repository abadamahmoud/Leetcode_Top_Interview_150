package main

import "fmt"

type Solution struct{}

func (s Solution) IsValid(str string) bool {
    stack := []rune{}
    for _, char := range str {
        if char == '(' || char == '{' || char == '[' {
            stack = append(stack, char) // Push to stack
        } else {
            if len(stack) == 0 {
                return false
            }
            top := stack[len(stack)-1]
            stack = stack[:len(stack)-1] // Pop from stack
            if (char == ')' && top != '(') || 
               (char == '}' && top != '{') || 
               (char == ']' && top != '[') {
                return false
            }
        }
    }
    return len(stack) == 0
}

func main() {
    solution := Solution{}
    s := "({[]})"
    fmt.Println("Is Valid:", solution.IsValid(s)) // Output: true
}
