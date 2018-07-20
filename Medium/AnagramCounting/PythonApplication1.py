import math
import string

occurences = {}

for line in iter(input, '\n'):
	denominator = 1
	
	for char in string.ascii_letters:
		occurences[char] = 0

	for char in line:
		occurences[char] += 1

	for item in occurences:
		if occurences[char] != 0:
			denominator *= math.factorial(occurences[char])

	print ( math.factorial(line) / denominator )
