start = 1

while start <= 50:
    print(start)
    start += 1
    if start%3 == 0:
        print("Fizz")
    elif start%5 == 0:
        print("Buzz")
    else:
        print(start)