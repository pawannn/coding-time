#!/bin/python

'''
Problem :
At a fun fair, a street vendor is selling different colours of balloons. He sells N number of different colours of balloons (B[]). 
The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.
Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. 
The colours of the balloons can all be either upper case or lower case in the array. If all the inputs are even in number, display the message “All are even”.

Example 1:

7  -> Value of N
[r,g,b,b,g,y,y]  -> B[] Elements B[0] to B[N-1], where each input element is sepārated by ṉew line.
Output :
r -> [r,g,b,b,g,y,y]  -> “r” colour balloon is present odd number of times in the bunch.
Explanation:
From the input array above:

r: 1 balloon 
g: 2 balloons
b:  2 balloons
y : 2 balloons
Hence , r is only the balloon which is odd in number.
Example 2:
Input:

10 -> Value of N
[a,b,b,b,c,c,c,a,f,c] -> B[], elements B[0] to B[N-1] where input each element is separated by new line.
Output :
b-> ‘b’ colour balloon is present odd number of times in the bunch.
Explanation:
From the input array above:

a: 2 balloons
b: 3 balloons 
c: 4 balloons 
f: 1 balloons 
Here, both ‘b’ and ‘f’ have odd number of balloons. But ‘b’ colour balloon occurs first.
Hence , b is the output.

#TCS NQT

#
'''

def function(n,lst):
    Dict = {}
    for i in lst:
        if i not in Dict.keys():
            Dict[i] = 1
        else:
            Dict[i] += 1
    for key in Dict.keys():
        if(Dict[key] %2 != 0):
            return key

n = 10
lst = ['a','b','b','b','c','c','c','a','f','c']
print(function(n,lst))