import math 
# Ask for sides
sideA = int(input("What is the length of A?"))
sideB = int(input("What is the length of B?"))
sideC = int(input("What is the length of C?"))
# Calculate semi-perimeter
S = (sideA + sideB + sideC)/2
# Calculate area
Area = math.sqrt(S *(S-sideA)*(S-sideB)*(S-sideC))

print(Area)
