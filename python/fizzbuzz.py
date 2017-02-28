l = list(range(0,15+1))
for i in l:
	if i%3 == 0 and i%5 == 0:
		l[i] = 'FizzBuzz'
	elif i%3 != 0 and i%5 != 0:
		l[i] = str(i)
	elif i%3 == 0 and i%5 !=0:
		l[i] = 'Fizz'
	elif i%3 != 0 and i%5 ==0:
		l[i] = 'Buzz'

print(l[1:])