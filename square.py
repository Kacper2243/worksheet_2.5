import sys

# Check if at least one number is provided
if len(sys.argv) < 2:
    print("Usage: python script.py <num1> <num2> ...")
    sys.exit(1)

numbers = []
# Convert command-line arguments to integers using a for-loop
for arg in sys.argv[1:]:
    try:
        num = int(arg)
        numbers.append(num)
    except ValueError:
        print(f"Invalid integer value: {arg}")
        sys.exit(1)

# Compute and display the square of each number
for num in numbers:
    print("Number:", num, "Square:", num * num)
