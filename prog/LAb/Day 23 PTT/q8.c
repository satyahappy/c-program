// C Program to Find Square and Cube of a Number Using Functions
#include <stdio.h>

int findSquare(int n){
    return n*n;
}

int findCube(int n){
    return n*n*n;
}

int main(){
    int num, square, cube;
    
    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Calling out function to find square
    square = findSquare(num);
    
    // Calling out function to find cube
    cube = findCube(num);
    
    // Displaying result
    printf("Square of %d is: %d \n", num, square);
    printf("Cube of %d is: %d", num, cube);
    
    return 0;
}