#include<stdio.h>

int main()
{
  int a,b,sum,sub,div,rem,pro,c,i,x;
  
  printf("\n\t\t\t*****************************************");
  printf("\n\t\t\t* CALCULATOR CREATED BY PADMALAYA RAWAL *");
  printf("\n\t\t\t*****************************************");
  printf("\nenter first value : ");
  scanf("%d", &a);

 for(x=1;x<=500;x++)
 { 
  printf("\n\n OPERATION NUMBER: %d",x);
  printf("\n choose your operation on the entered numbers: ");
  printf("\n 1. ADDITION ");
  printf("\t 2. SUBSTRACTION ");
  printf("\t 3. PRODUCT ");
  printf("\t 4. DIVISION ");
  printf("\t 5. REMAINDER ");
  printf("\n entered choice: ");
  scanf("%d", &c);

  printf("\n enter next value: ");
  scanf("%d", &b);

  if(x==1)
  {
   sum=a+b;
   sub=a-b;
   pro=a*b;
   div=a/b;
   rem=a%b;

   if(c==1)
  {
    printf("\n Addition of entered numbers is: %d", sum);
	i=sum;
  }

  else if(c==2)
  {
   printf("\n Substraction of entered numbers is : %d", sub);
   i=sub;
  }
 
  else if(c==3)
  {
   printf("\n product of entered numbers is %d", pro);
   i=pro;  
  }

  else if(c==4)
  {
   printf("\n quotient of entered numbers after division is %d", div);
   i=div;
  }

  else if(c==5)
  {
   printf("\n Remainder of entered number after division is %d", rem);
   i=rem;
  } 
  
  else if(c>=6 || c<=0)
  {
   printf(" \n operation can't be done because you have choosed invalid operation ");
   i=0;
  }
 }
  
  else
  {
	sum= i+b;
	sub= i-b;
	pro= i*b;
	div= i/b;
	rem= i%b;
 
  if(c==1)
  {
    printf("\n Addition of entered numbers is: %d", sum);
	i=sum;
  }

  else if(c==2)
  {
   printf("\n Substraction of entered numbers is : %d", sub);
   i=sub;
  }
 
  else if(c==3)
  {
   printf("\n product of entered numbers is %d", pro);
   i=pro;  
  }

  else if(c==4)
  {
   printf("\n quotient of entered numbers after division is %d", div);
   i=div;
  }

  else if(c==5)
  {
   printf("\n Remainder of entered number after division is %d", rem);
   i=rem;
  } 
  
  else if(c>=6 || c<=0)
  {
   printf(" \n operation can't be done because you have choosed invalid operation ");
   i=0;
  }
 }
} 
  return 0;
 } 