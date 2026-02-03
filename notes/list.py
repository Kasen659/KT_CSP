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
        print(f"{number} - 10 []")