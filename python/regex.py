import re, time, time

if re.match(r'^[a-zA-Z]\-\d{2}', 'F-11'):
	print('yes')
else:
	print('no')

print(re.split(r'[\s\,\.]+', 'a   ..   b., c.   d'))

# Group
g = re.match(r'(\d{3})-(\d{4})-(\d{4})', '080-4064-6027')
print(g.group(0))
print(g.group(1))
print(g.group(2))
print(g.groups())
g1 = re.match(r'(\d+?)-(2*)', '1-22222222')
print(g1.groups())

print(time.timezone)
print(time.tzname[time.daylight] == 'JST')