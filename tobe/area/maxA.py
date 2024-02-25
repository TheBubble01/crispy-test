#!/usr/bin/python
p = int(input("what is the perimeter?: "))
al = []
for l in range(1, p):
    b = (p - l)/2
    a = b*l
    al.append(a)
al.sort()
print("The maximum possible area is: ",al[-1])
