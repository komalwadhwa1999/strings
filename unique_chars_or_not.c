#include<stdio.h>
#include<string.h>

void isUniqueChars(char *str)
{
  int l=strlen(str);
  int i,j;int flag=0;
  for(i=0;i<l;i++)
  {
    for(j=i+1;j<l;j++)
    {
      if(str[i]==str[j])
        flag=1;
    }
  }
  if(flag==0)
    printf("YES");
  else
    printf("NO");

}


int main()
{
    char str1[]="coding";
    int i=0;
    
    isUniqueChars(str1);

    return 0;
}

