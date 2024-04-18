import math

# Function to print the Juggler Sequence
def print_juggler(n):
    a = n
    # Print the first term
    print(a, end=" ")
    # Calculate terms until the last term is not 1
    while a != 1:
        # Check if the previous term is even or odd
        if a % 2 == 0:
            # Calculate the next term for even previous term
            b = int(math.sqrt(a))
        else:
            # Calculate the next term for odd previous term
            b = int(math.sqrt(a) * math.sqrt(a) * math.sqrt(a))

        print(b, end=" ")
        a = b
def main():
    fileName = input("Enter the name of the input file: ")
    with open(fileName, "r") as inputFile:
        # Read numbers from the file until end-of-file
        for line in inputFile:
            num = int(line.strip())
            print_juggler(num)  # Generate and print Juggler Sequence for each number
            print()
if __name__ == "__main__":
    main()
