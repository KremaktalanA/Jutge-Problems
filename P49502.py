i = 20
count = 0
while i <= 60:
	d = i%10
	if d == 0:
		r = 4
	elif i % d == 0:
		count = count+1
	i = i+1
print (count)
