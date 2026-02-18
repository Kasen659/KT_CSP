numbers = [21,938,729817,391]
names = ["kasen", "alex", "dj", "jimmy"]

print(len(names))
names[0] = "alex"
names.append("billy")
names.pop(3)
print(names)

for name in names:
    print(f"hello {name}")

    for number in numbers:
        print(f"{number} - 10 = {number-10}")

    #iteration => repetition
for i in range(20):
    print(f"My code has iterated {i} times")