def classify_triangle(a, b, c):
    if (a + b <= c) or (a + c <= b) or (b + c <= a):
        return "Invalid triangle"

    
    if a == b == c:
        return "Equilateral triangle"
    elif a == b or b == c or c == a:
        return "Isosceles triangle"
    else:
        return "Scalene triangle"

try:
    a = float(input("Enter length of side a: "))
    b = float(input("Enter length of side b: "))
    c = float(input("Enter length of side c: "))
    
    result = classify_triangle(a, b, c)
    print(result)
except ValueError:
    print("Invalid input. Please enter numeric values for the sides.")
