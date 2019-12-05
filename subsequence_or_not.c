#include<stdio.h>
#include<string.h>
int isSubSequence(char str[], char match[], int m, int n) 
{ 
   
    if (n == 0) return 1; 
    if (m == 0) return 0; 
  

    if (str[m-1] == match[n-1]) 
        return isSubSequence(str, match, m-1, n-1); 
  
    return isSubSequence(str, match, m-1, n); 
} 
void strSubsequence(char *str, char* match)
{
  int m=strlen(str);
  int n=strlen(match);
  int x=isSubSequence(str,match,m,n);
  if(x==0)
    printf("NO");
  else
    printf("YES");
}
int main()
{
    char str1[]="hello";
    char str2[]="ho";
    strSubsequence(str1,str2);
    return 0;
}

