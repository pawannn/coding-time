#!/bin/python2

'''
Problem :
Your placement session has begun in you college. There are N number of students standing outside an interview room in a line.
It is given that a person who goes in first has higher chances of getting selected.

Each student has a number asscoiated with then known as problem-solving capability (PSC). 
The higher the knowledge, the higher the chances of selection. Now, each student wants to know the number of students ahead of her/him who have more 
problem  solving capability than her/him.

Find this number for each student.

Example :
i/p : [4,9,5,3,2,10]
O/p : [0,0,1,3,4,0]

Explanation :

- The first student : Does not have any student ahead of her/him. so the answer is 0.
- The second student : Has PCS greater than her/him. So the answer is 0.
- The third student : 9 is greator than 5. So the answer is 1.
- The fourth student : 9,4 and 5 are greater than 3. So the answer is 3. 
- The fifth student : 9,4,5,3 are greater than 2. So the answer is 4.
- The sixth student : 9,4,5,3,2 are greater than 10. So the answer is 0.
'''

lst = list(map(int,input("Enter elements :").split()))
size = len(lst)
res = []

for i in range(size):
    if(i==0):
        res.append(0)
    else:
        visited = []
        count = 0
        for j in range(i):
            if(lst[i] < lst[j]):
                count += 1
                visited.append(j)
        res.append(count)
print(res)