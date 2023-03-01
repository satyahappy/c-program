#include <stdio.h> 
 
int main() 
{ 
  int n[10]; 
  int i, odd, even, all; 
 
  for( i=0; i<10; i++ ) 
  { 
    printf( "Enter number : " ); 
    scanf( "%d", &n[i] ); 
 
    if( n[i]%2 == 0 ) 
      even += n[i]; 
    else 
      odd += n[i]; 
 
    all += n[i]; 
  } 
 
  printf( "Analysis: \n" ); 
  printf( "Sum of all odd numbers is : %d\n", odd ); 
  printf( "Sum of all even numbers is : %d\n", even ); 
  printf( "Sum of all 10 numbers is : %d\n", all ); 
 
  return 0; 
}