
number = int(input("Enter a number: "))

if number % 3 == 0 and number % 5 == 0:
    print("Divisible by both")
elif number % 3 == 0:
    print("Divisible by 3 but not by 5")
elif number % 5 == 0:
    print("Divisible by 5 but not by 3")
else:
    print("Divisible by None")
