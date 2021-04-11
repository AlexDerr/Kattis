n = int(input())

for i in range(0, n):
	line = list(map(int,input().strip().split()))

	k = line[0]
	if(k == 0):
		print("1")
	else:
		outletsAvailable = 0
		for k in range(1, k + 1):
			O = line[k]
			outletsAvailable += O
		print(outletsAvailable - k + 1)