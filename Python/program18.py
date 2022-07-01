#!/bin/python

'''
Problem : 
A parking lot in a mall has RxC number of parking spaces. Each parking space will either be  empty(0) or full(1). 
The status (0/1) of a parking space is represented as the element of the matrix. 
The task is to find index of the prpeinzta row(R) in the parking lot that has the most of the parking spaces full(1).

Note :
RxC- Size of the matrix
Elements of the matrix M should be only 0 or 1.

Example 1:
Input :
3   -> Value of R(row)
3    -> value of C(column)
[0 1 0 1 1 0 1 1 1] -> Elements of the array M[R][C] where each element is separated by new line.
Output :
3  -> Row 3 has maximum number of 1’s

Example 2:
input :
4 -> Value of R(row)
3 -> Value of C(column)
[0 1 0 1 1 0 1 0 1 1 1 1] -> Elements of the array M[R][C]
Output :
4  -> Row 4 has maximum number of 1’s

#TCS NQT
'''

input = [0, 1, 0, 1, 1, 0, 1, 1, 1]  #list(map(int, input()).split(" "))
r = 3 #int(input())
c = 3 #int(input())
Max, i = 0, 0
table = []
while(i < len(input)):
    lst = []
    for j in range(i,i+r):
        lst.append(input[j])
    table.append(lst)
    i += r

for i in range(len(table)):
    count = 0
    for j in range(len(table[i])):
        if(table[i][j] == 1):
            count += 1
    if(count > Max):
        Max = count
print(Max)
