#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

// This function prints the juggler Sequence
void printJuggler(long long n)
{
    long long a = n;

    // print the first term
    cout << a << " ";

    // calculate terms until
    // last term is not 1
    while (a != 1)
    {
        long long b = 0;

        // Check if previous term
        // is even or odd
        if (a % 2 == 0)

            // calculate next term
            b = floor(pow(a,0.5));

        else

            // for odd previous term
            // calculate next term
            b = floor(pow(a,1.5));

        cout << b << " ";
        a = b;
    }
}

int main()
{
    string fileName;
    cout << "Enter the name of the input file: ";
    cin >> fileName;

    ifstream inputFile(fileName); // Open the input file
    if (!inputFile)
    {
        cerr << "Error: Unable to open the input file." << endl;
        return 1;
    }

    long long num;
    while (inputFile >> num) // Read numbers from the file until end-of-file
    {
        printJuggler(num); // Generate and print Juggler Sequence for each number
        cout << endl;
    }

    inputFile.close(); // Close the input file

    return 0;
}

