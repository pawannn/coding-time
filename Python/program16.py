#!/bin/python

def function(v,w):
    res = ((4*v) - w)//2
    return [res, v - res]

v = 200
w = 540
if(w >= 2 and w%2 == 0 and v < w):
    res = function(v,w)
    print("TW = {} FW = {}".format(res[0],res[1]))
else:
    print("INVALID INPUT")