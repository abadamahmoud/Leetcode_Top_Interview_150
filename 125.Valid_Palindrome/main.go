package main

import (
	"fmt"
	"unicode"
)

type ValidPalindrome struct{}

func (vp ValidPalindrome) isPalindrome(s string) bool {
	left, right := 0, len(s)-1
	for left < right {
		for left < right && !vp.isAlphanumeric(rune(s[left])) {
			left++
		}
		for left < right && !vp.isAlphanumeric(rune(s[right])) {
			right--
		}
		if vp.toLower(rune(s[left])) != vp.toLower(rune(s[right])) {
			return false
		}
		left++
		right--
	}
	return true
}

func (vp ValidPalindrome) isAlphanumeric(c rune) bool {
	return unicode.IsLetter(c) || unicode.IsDigit(c)
}

func (vp ValidPalindrome) toLower(c rune) rune {
	if c >= 'A' && c <= 'Z' {
		return c + ('a' - 'A')
	}
	return c
}

func main() {
	validator := ValidPalindrome{}
	s := "A man, a plan, a canal: Panama"
	fmt.Println(validator.isPalindrome(s)) // Output: true
}
