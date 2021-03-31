import math
import string
import sys

occurences = {}

for line in sys.stdin:
    str = line.splitlines()[0]
    denominator = 1

    for char in string.ascii_letters:
        occurences[char] = 0

    for char in str:
        occurences[char] += 1

    for item in occurences:
        if occurences[item] != 0:
            denominator *= math.factorial(occurences[item])

    result = math.factorial(len(str))

    result = result // denominator

    print ( result )
