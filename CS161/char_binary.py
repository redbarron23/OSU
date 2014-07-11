#!/usr/bin/env python

# inclusive of 255
myrange = range(256)

def bin(a):
    s=''
    t={'0':'000','1':'001','2':'010','3':'011',
       '4':'100','5':'101','6':'110','7':'111'}
    for c in oct(a)[1:]:
        s+=t[c]
    return s

for i in myrange:
    #bin(i)
    print(i, bin(i)) 
