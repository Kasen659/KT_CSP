def hello():
    print('hello world')

def full_name(first_name, last_name):
    return f'{first_name} {last_name}'

print(f'Hello {full_name("Kasen","Thomas")}')
person_one = full_name("Kelsee","Thomas")
print(f'the second person is {person_one}')
Person = full_name("Abby","Thomas")
hello(Person)



def factorial(number):
    total = 1
    for x in range(number, 1, -1):
        total *= x
    return total

for y in range(1, 10):
    print(f"The factorial of {y} is {factorial(y)}")

num = 1

def add():
    num = 1
    num += 1
    return num

print(add())