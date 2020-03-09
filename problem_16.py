def fast_exp(base, n):
	res = 1

	while(n):
		if(n & 1):
			res = (res*base)

		base = (base * base)
		n >>= 1
	
	return res

def sum_digits(num):
	total = 0
	while(num):
		total += num%10
		num //= 10
	return total

num = fast_exp(2, 1000)
print(sum_digits(num))
# Short Answer
# num = pow(2, 1000)
# print(sum_digits(num))
