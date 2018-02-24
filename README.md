# Use 2 pointers and Hash Table to find the longest substring without repeating characters in O(n) time

## Problem to solve
Given a string, find the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

## Solution

Keep two pointers, lIdx for the start of the substring, rIdx for the end of the substring. 

Keep a hash table (implemented as a std::vector) to keep track of the position of a character. 

Loop rIdx through the entire input string. 

If a repated character is found using the hash table, move lIdx to the beginning of the substring to skip the repeated character. 

In the process, record the max length of substring.

The given solution is using iterative method. This can also be done using recursive method.

