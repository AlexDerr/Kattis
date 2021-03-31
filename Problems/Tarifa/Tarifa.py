import string
import sys

x = int(input())
n = int(input())
total = 0

for i in range(0, n):
	total = total + x - int(input())

total = total + x
print(total)
