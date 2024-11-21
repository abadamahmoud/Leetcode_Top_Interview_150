package main

import "fmt"

type Solution struct{}

func (s Solution) isSubsequence(sub string, t string) bool {
    sIndex, tIndex := 0, 0
    for sIndex < len(sub) && tIndex < len(t) {
        if sub[sIndex] == t[tIndex] {
            sIndex++
        }
        tIndex++
    }
    return sIndex == len(sub)
}

func main() {
    solution := Solution{}
    s := "abc"
    t := "ahbgdc"
    fmt.Println(solution.isSubsequence(s, t)) // Output: true
}
