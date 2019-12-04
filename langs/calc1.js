var e = 0.0, f = 1.0, i = 28;

while (i>0) {
	f *= i;
	e += f;
	i--;
}

e /= f;

console.log(e);
