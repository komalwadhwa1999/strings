#include <stdio.h>
#include <string.h>
void count1(int num)
{
  if(num==1)
    printf("one");
  if(num==2)
    printf("two");
  if(num==3)
    printf("three");
  if(num==4)
    printf("four");
  if(num==5)
    printf("five");
  if(num==6)
      printf("six");
  if(num==7)
        printf("seven");
  if(num==8)
    printf("eight");
  if(num==9)
    printf("nine");
    
}
void count2(int num)
{
  if(num==10)
    printf("ten");
  if(num==11)
 	printf("eleven");
  if(num==12)
    printf("twelve");
  if(num==13)
    printf("thirteen");
  if(num==14)
    printf("fourteen");
  if(num==15)
    printf("fifteen");
  if(num==16)
    printf("sixteen");
  if(num==17)
    printf("seventeen");
  if(num==18)
    printf("eighteen");
  if(num==19)
    printf("nineteen");
  if(num==20)
    printf("twenty");
  if(num==30)
    printf("thirty");
  if(num==40)
    printf("forty");
  if(num==50)
    printf("fifty");
  if(num==60)
    printf("sixty");
  if(num==70)
    printf("seventy");
  if(num==80)
    printf("eighty");
  if(num==90)
    printf("ninety");
}
void intToWord(int num)
{
  int c=0;
  if(num==0)
    printf("zero");
  int n=num;
  while(num!=0)
  {
    c++;
    num/=10;    
  }
 //rintf("%d",c);
  if(c==1)
    count1(n);
  if(c==2)
  {
    if(n<21)
      count2(n);
    else
    {
      int r1,r2;
    r1=n%10;
    n/=10;
    r2=n%10;
    count2(r2*10);
    printf(" ");
    count1(r1);
    }
  }
  if(c==3)
  {
     int r1,r2,r3;
    r1=n%10;
    n/=10;
    r2=n%10;
    n/=10;
    r3=n%10;
    count1(r3);
    printf(" hundred");
    if(r2!=0){
      printf(" ");
    count2(r2*10);
    }
    if(r1!=0){
    printf(" ");
    count1(r1);
    }
  }
  if(c==4)
  {
    int r1,r2,r3,r4;
    r1=n%10;
    n/=10;
    r2=n%10;
    n/=10;
    r3=n%10;
    n/=10;
    r4=n%10;
    count1(r4);
    printf(" thousand");
    if(r3!=0)
    {
      printf(" ");
       count1(r3);
    printf(" hundred");
    }
     if(r2!=0){
      printf(" ");
    count2(r2*10);
    }
    printf(" ");
    count1(r1);
  }
  if(c==5)
  {
    int r1,r2,r3,r4,r5;
     r1=n%10;
    n/=10;
    r2=n%10;
    n/=10;
    r3=n%10;
    n/=10;
    r4=n%10;
    n/=10;
    r5=n%10;
    if(r5*10+r4<=19)
      count2(r5*10+r4);
    else
    count2(r5*10);
   
    
    if(r4!=0 &&r5 *10>19)
    {
      printf(" ");
      count1(r4);
    }
   printf(" thousand");
     if(r3!=0)
    {
       printf(" ");
       count1(r3);
    printf(" hundred");
    }
     if(r2!=0){
      printf(" ");
    count2(r2*10);
    }
    printf(" ");
    count1(r1);
    
    
  }
  if(c==6)
  {
    int r1,r2,r3,r4,r5,r6;
     r1=n%10;
    n/=10;
    r2=n%10;
    n/=10;
    r3=n%10;
    n/=10;
    r4=n%10;
    n/=10;
    r5=n%10;
    n/=10;
    r6=n%10;
    count1(r6);
    printf(" lakhs");
    if(r5!=0)
    {
      printf(" ");
       count2(r5*10);
    }
     if(r4!=0)
    {
      printf(" ");
      count1(r4);
    }
   printf(" thousand");
     if(r3!=0)
    {
       printf(" ");
       count1(r3);
    printf(" hundred");
    }
     if(r2!=0){
      printf(" ");
    count2(r2*10);
    }
    printf(" ");
    count1(r1);
  }

}

int main() {    
  int x=329;
  intToWord(x);
    return 0;
}
