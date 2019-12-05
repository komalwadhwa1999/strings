#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int isRotation(char *str1, char* str2)
{
  int size1=strlen(str1);
  int size2=strlen(str2);void *ptr; char *temp;
  if(size1!=size2)
    return 0;
 
     temp   = (char *)malloc(sizeof(char)*(size1*2 + 1)); 
  temp[0] = '\0'; 
  strcat(temp, str1); 
  strcat(temp, str1); 
  ptr = strstr(temp, str2); 
  
  free(temp);
  if (ptr != NULL) 
    return 1; 
  else
    return 0; 
  

}



int main() 
{ 
    char str1[] = "coder"; 
    char str2[]="oderc";
   int x=isRotation(str1,str2);
   if(x==1)
   printf("strings are rotations of each other");
   else
   printf("strings are not rotations of each other");
    return 0; 
} 
