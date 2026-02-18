import random #libary 
start = 0

while start <= 10:
    print(start)
    start += 1

print("the loop is over")

goose = random.randint(1,26)
count = 1

while count != goose:
    print("Duck")
    count += 1

print(goose)

number = random.randint(1,20)

while True:
    guess = int(input("tell me a number between 1 and 20"))
    if guess == number:
        print(f"you win the number is {number}")
        break 
    elif guess < number:
        print("guess higher")
    else:
        print("guess lower")
