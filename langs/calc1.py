def main():
    e = 0.0
    f = 1.0
    i = 28
    while i > 0:
        f *= i
        e += f
        i = i - 1
    e /= f
    return e

if __name__== "__main__":
  print (main())
