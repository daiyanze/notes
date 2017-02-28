
a = [1,2,3,4,5]
b = [1,4,3,8,2,11,42,5,0,0,69]
for i in a:
	j = 1
	try:
		while i > b[b.index(i)+j]:
			j += 1
		print(b[b.index(i)+j])
	except Exception as e:
		print(-1)
