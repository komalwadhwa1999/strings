#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare (const void *a, const void * b) 
{  return ( *(char *)a - *(char *)b ); } 
void swap (char* a, char* b) 
{ 
    char t = *a; 
    *a = *b; 
    *b = t; 
} 

int findCeil (char str[], char first, int l, int h) 
{ 
   
    int ceilIndex = l; 
    for (int i = l+1; i <= h; i++) 
      if (str[i] > first && str[i] < str[ceilIndex]) 
            ceilIndex = i; 
  
    return ceilIndex; 
} 
  

void printPermute ( char str[] ) 
{ 
   
    int size = strlen(str); 
  
    // Sort the string in increasing order 
    qsort( str, size, sizeof( str[0] ), compare ); 
  
   
    int isFinished = 0; 
    while ( ! isFinished ) 
    { 
        // print this permutation 
        printf ("%s ", str); 
  
        int i; 
        for ( i = size - 2; i >= 0; --i ) 
           if (str[i] < str[i+1]) 
              break; 
  
        if ( i == -1 ) 
            isFinished = 1; 
        else
        { 
            int ceilIndex = findCeil( str, str[i], i + 1, size - 1 );
            swap( &str[i], &str[ceilIndex] ); 
            qsort( str + i + 1, size - i - 1, sizeof(str[0]), compare ); 
        } 
    } 
} 

int main() 
{ 
    char str[] = "ABCD"; 
    printPermute( str ); 
    return 0; 
} 
