def factorial(n): # n!
    r = 1
    i = 2
    while i <= n:
        r *= i
        i += 1
    return r

def P(n, r): # n! / (n-r)!
	return factorial ( n ) / factorial ( n - r )

def main(n):
    e = 0.0
    f = 1.0
    r = -1 
    while r <= n:
        e += P (n, r)
        r += 1
    e /= P (n, r - 2)
    return e

if __name__== "__main__":
	print (main(28))
