#include <stdio.h>
#include <math.h>

// Function to print the Juggler Sequence
void printJuggler(long long n)
{
    long long a = n;
    // Print the first term
    printf("%lld ", a);

    // Calculate terms until the last term is not 1
    while (a != 1)
    {
        long long b = 0;
        // Check if the previous term is even or odd
        if (a % 2 == 0)
            // Calculate the next term for even previous term
            b = (long long)floor(sqrt(a));
        else
            // Calculate the next term for odd previous term
            b = (long long)floor(sqrt(a) * sqrt(a) * sqrt(a));

        printf("%lld ", b);
        a = b;
    }
}
int main()
{
    char fileName[100];
    printf("Enter the name of the input file: ");
    scanf("%s", fileName);
    FILE *inputFile = fopen(fileName, "r"); // Open the input file
    if (!inputFile)
    {
        fprintf(stderr, "Error: Unable to open the input file.\n");
        return 1;
    }
    long long num;
    // Read numbers from the file until end-of-file
    while (fscanf(inputFile, "%lld", &num) != EOF)
    {
        printJuggler(num); // Generate and print Juggler Sequence for each number
        printf("\n");
    }

    fclose(inputFile); // Close the input file
    return 0;
}

