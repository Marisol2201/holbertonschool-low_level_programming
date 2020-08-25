#!/usr/bin/python3
a = [11, 3, 8, 5, 22]
b = [6, 7, 11, 22, 27]
c = []
for i in a:
    for x in b:
        if i == x:
            c.append(i)
            print(c)