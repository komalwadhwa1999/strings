#include<stdio.h>
#include<string.h>

void isPalindrome(char *str)
{
  int i=0;
  int l=strlen(str)-1;
  while(l>i)
  {
    if(str[i++]!=str[l--])
    {
      printf("NO");
      return;
    }
  }
  printf("YES");
  

}

int main()
{
    char str1[]="madam";
    int i=0;
    
    isPalindrome(str1);

    return 0;
}

