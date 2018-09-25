import sys
import string
import math

r, c = map(int, input().split())

if r == c:
	print("0")
else:
	p = (math.pi * (r - c) * (r - c)) / ((r * r) * math.pi) * 100
	print(p)
