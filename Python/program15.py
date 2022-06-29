#!/bin/python

'''
Problem :
Particulate matters are the biggest contributors to Delhi pollution. The main reason behind the increase in the concentration of PMs include vehicle emission by applying Odd Even concept for all types of vehicles. 
The vehicles with the odd last digit in the registration number will be allowed on roads on odd dates and those with even last digit will on even dates.
Given an integer array a[], contains the last digit of the registration number of N vehicles traveling on date D(a positive integer). 
The task is to calculate the total fine collected by the traffic police department from the vehicles violating the rules.
Note : For violating the rule, vehicles would be fined as X Rs.

Example 1:

Input :
4 -> Value of N
{5,2,3,7} -> a[], Elements a[0] to a[N-1], during input each element is separated by a new line
12 -> Value of D, i.e. date 
200 -> Value of x i.e. fine
Output :
600  -> total fine collected 
Explanation:
Date D=12 means , only an even number of vehicles are allowed. 
Find will be collected from 5,3 and 7 with an amount of 200 each.
Hence, the output = 600.

Constraints:
0<N<=100
1<=a[i]<=9
1<=D <=30
100<=x<=5000 
The input format for testing 

The candidate has to write the code to accept 4 input(s).
First input - Accept for N(Positive integer) values (a[]), where each value is separated by a new line.
Third input - Accept value for D(Positive integer)
Fourth input - Accept value for X(Positive integer )
The output format for testing 
The output should be a positive integer number (Check the output in Example 1, Example e) if no fine is collected then print ”0”.
#TCS NQT
'''

def fine(n,a,d,fine):
    finecollected = 0
    if(d%2 == 0):
        for i in range(len(a)):
            if(a[i] % 2 != 0):
                finecollected += fine
    else:
        for i in range(len(a)):
            if(a[i] % 2 == 0):
                finecollected += fine

    return finecollected


a = list(map(int, input("Enter last digit of vehicles : ").split(" ")))
n = len(a)
d = int(input("Enter date : "))
Fine = int(input("Enter Fine : "))
print(fine(n,a,d,Fine))