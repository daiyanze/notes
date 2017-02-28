
nums = [31,31,20,30,31,20,20,20,31,20,20]

nums[:5]

s = sum(nums)/len(nums)

# 		i+=1
# nums += [0]*i

P = {(x-s)**2:x for x in nums}
# P = sum([(x-s)**2 for x in nums])/len(nums)

print(P)