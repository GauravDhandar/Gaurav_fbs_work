
age = int(input("Enter your age: "))

if age < 12:
    print("Child")
elif 12 <= age <= 19:
    print("Teenager")
elif 20 <= age <= 59:
    print("Adult")
else:
    print("Senior")
