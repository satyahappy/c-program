#include <stdio.h>
 
// Function to print the pattern square
// inside a square
void printPattern(int n)
{
    int i, j;
     
    // To access rows of the square
    for (i = 1; i <= n; i++)
    {
        // To access columns of the square
        for (j = 1; j <= n; j++)
        {
     
            // For printing the required square pattern
            if ((i == 1 || i == n || j == 1 || j == n) ||
                (i >= 3 && i <= n - 2 && j >= 3 && j <= n - 2) &&
                 (i == 3 || i == n - 2 || j == 3 || j == n - 2))
            {
                // Prints star(*)
                printf("*");
            }
            else
            {
                // Prints space(" ")
                printf(" ");
            }
        }
     
        printf("\n");
    }
}
 
// Driver Code
int main()
{
    int n = 7;
    printPattern(n);
    return 0;
}