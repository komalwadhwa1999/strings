#include<stdio.h>
#include<string.h>

char* reverseString (char str[])
{
  char s[100];
  int i=0;
  int l=strlen(str)-1;
  for(i=0;i<strlen(str);i++)
  {
    s[i]=str[l];l--;
  }
  s[i]='\0';
 for(i=0;i<strlen(s);i++)
  {
    str[i]=s[i];;
  }
  return str;
}



int main()
{
    char str1[]="hello";
    int i=0;
    
    printf("%s",reverseString(str1));

    return 0;
}

