from math import log, ceil

# array = [1,2,3,4,5,6,7,8,9,10,11,12,13,14]
array = [0,1,2,3,4,5,6,7,8,None,10,11,12,13,14,15]
rows = ceil(log((len(array)+1),2))
new_list = []
for r in range(0, rows):
	d = (-1)**r
	a = list(range(2**r-1, 2**(r+1)-1))
	# print(a[0], a[-1])
	print(a)
	if r == 0:
		new_list.append([array[0]])
	else:
		l = list(range(2**r-1, 2**(r+1)))
		new_list.append(array[l[0]:l[-1]][::d])

print(new_list)