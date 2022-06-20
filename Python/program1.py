#!/bin/python

'''
Problem :
Given a list that contains single digit integers, add 1 to the number in array.
eg : i/p : [3,5,4,1]
o/p : [3,5,4,2]
'''


input = [9,9,9,9]
input.reverse()
input[0] = input[0] + 1
for i in range(len(input)):
    if input[i] == 10:
        input[i] = 0
        if i == len(input)-1:
            input.append(1)
        else:
            input[i+1] = input[i+1] + 1
input.reverse()
print(input)