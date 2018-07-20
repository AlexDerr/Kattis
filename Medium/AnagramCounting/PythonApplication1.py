import math
import string

occurences = {}

for input in iter(input, '\n'):
	line = input.split
	denominator = 1
	
	for char in string.ascii_letters:
		occurences[char] = 0

	for char in line:
		occurences[char] += 1

	for item in occurences:
		if occurences[char] != 0:
			denominator *= math.factorial(occurences[char])

	print ( math.factorial(line) / denominator )
