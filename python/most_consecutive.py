nums = [1,1,0,0,1,1,1,0,1,0,0,1,1,1,1,0,0,1,1,0,1]

i = 0
j = 0

for n in nums:
	if n == 1:
		i += 1
	else:
		i = 0
	if i > j:
		j = i

print(j)