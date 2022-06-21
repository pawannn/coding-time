#!/bin/python

'''
Rotate the given list to the right by k places.

Example 1:
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]

Example 2:
Input: head = [0,1,2], k = 4
Output: [2,0,1]

'''

head = [0,1,2] 
k = 4

for i in range(k):
    num = head.pop()
    head.insert(0,num)

print(head)