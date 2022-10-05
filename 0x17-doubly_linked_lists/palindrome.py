#!/usr/bin/python3

var = 0
for i in range(100):
    for j in range(100):
        a = 999 - i
        b = 999 - j
        mul = a * b
        if int(str(mul)[::-1]) == mul:
            if var < mul:
                var = mul
print("{:d}".format(var))
