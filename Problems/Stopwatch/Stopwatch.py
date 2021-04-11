n = int(input())
elements = []

if(n % 2 == 1):
	print("still running")
else:
	totalTime = 0

	for i in range(0, int(n/2)):
		start = int(input())
		stop = int(input())
		
		totalTime += stop - start
	
	print(totalTime)