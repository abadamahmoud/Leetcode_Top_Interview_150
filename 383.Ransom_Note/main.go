package main

import "fmt"

type Solution struct{}

func (s Solution) canConstruct(ransomNote string, magazine string) bool {
    freq := make([]int, 26)
    for _, c := range magazine {
        freq[c - 'a']++
    }
    for _, c := range ransomNote {
        if freq[c - 'a']--; freq[c - 'a'] < 0 {
            return false
        }
    }
    return true
}

func main() {
    solution := Solution{}
    ransomNote := "aa"
    magazine := "aab"
    fmt.Println(solution.canConstruct(ransomNote, magazine)) // Output: true
}
