#!/bin/python

'''
Problem : Short Encoding of Words

A valid encoding of an array of words is any reference string s and array of indices indices such that:

words.length == indices.length
The reference string s ends with the '#' character.
For each index indices[i], the substring of s starting from indices[i] and up to (but not including) the next '#' character is equal to words[i].
Given an array of words, return the length of the shortest reference string s possible of any valid encoding of words.

Example 1 :
Input: words = ["time", "me", "bell"]
Output: 10
Explanation: A valid encoding would be s = "time#bell#" and indices = [0, 2, 5].
words[0] = "time", the substring of s starting from indices[0] = 0 to the next '#' is underlined in "time#bell#"
words[1] = "me", the substring of s starting from indices[1] = 2 to the next '#' is underlined in "time#bell#"
words[2] = "bell", the substring of s starting from indices[2] = 5 to the next '#' is underlined in "time#bell#"
'''


words = ["time", "me", "bell"] #list
words.sort(key=len, reverse=True) #sort the list in descending order based on the length of words in the list => ['time','bell','me']
res = '' #initializing the result string to store the result
for i in range(len(words)): #looping through the list
    if words[i]+"#" not in res: #append '#' to end of each string of list and check if the 'words[i]#' is not in the result string
        res += words[i]+"#" #append the 'words[i]#' to the result string if not present in result string
print(res) #print the result string
print(len(res)) #print the length of result string


