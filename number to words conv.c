/*
Question :- Input a Number and Display it in words.

Input    :- 999999999
Output :- Ninty Nine Crore Ninty Nine Lakh Ninty Nine Thousands Nine Hundred Ninty Nine. */



#include<stdio.h>
int all(int);
int main()
{
	int num, rem, new, ex, temp;
	printf("Enter any number under 1000: ");
	scanf("%d", &num);
	
	temp=num;                   //let the number be 99999785= 9,99,99,7,85
	new=temp%10000000;          //new=99,99,7,85
	rem=temp/10000000;          //rem=9

	if(rem>0 && rem<=20)
	{
		all(rem);
		all(10000000); 
	}	
	
	
	else if(rem>20 && rem<=99)
	{
		ex=rem/10;
		all(ex*10);
		all(rem%10);
		all(10000000); 
	}
	
	
	temp=new%100000;     	     //temp=99,7,85
	rem=new/100000;          	 //rem=99
	new=temp;
	
	if(rem>0 && rem<=20)
	{
		all(rem);
		all(100000); 
	}	
	
	
	else if(rem>20 && rem<=99)
	{
		ex=rem/10;       	    //ex=9
		all(ex*10);				//ex*10=90
		all(rem%10);       	   //rem%10=9
		all(100000); 
	}
	 
	temp=new%1000;             //temp=7,85
	rem=new/1000;             //rem=99
	new=temp;
	
	if(rem>0 && rem<=20)
	{
		all(rem);
		all(1000); 
	}	
	
	
	else if(rem>20 && rem<=99)
	{
		ex=rem/10;
		all(ex*10);
		all(rem%10);
		all(1000); 
	}
	
	temp=new%100;             //temp=85
	rem=new/100;              //rem=7
	all(rem);
	if (rem>0)
	all(100);
	
	new=temp;               //temp=85
	rem=new/10;             //rem=8
	all(rem*10);            //rem=80
	
	rem=new%10;             //new=5
	all(rem);
	
	return 0;
}

int all(int num)
{
	switch(num)
	{
		case 1:
		printf("One ");
		break;
		
		case 2:
		printf("Two ");
		break;
		
		case 3:
		printf("Three ");
		break;
		
		case 4:
		printf("four ");
		break;
		
		case 5:
		printf("five ");
		break;
		
		case 6:
		printf("six ");
		break;
		
		case 7:
		printf("seven ");
		break;
		
		case 8:
		printf("eight ");
		break;
		
		case 9:
		printf("nine ");
		break;
		
		case 10:
		printf("ten ");
		break;
		
		case 11:
		printf("eleven ");
		break;
		
		case 12:
		printf("twelve ");
		break;
		
		case 13:
		printf("thirteen ");
		break;
		
		case 14:
		printf("fourteen ");
		break;
		
		case 15:
		printf("fifteen ");
		break;
		
		case 16:
		printf("sixteen ");
		break;
		
		case 17:
		printf("seventeen ");
		break;
		
		case 18:
		printf("eighteen ");
		break;
		
		case 19:
		printf("nineteen ");
		break;
		
		case 20:
		printf("twenty ");
		break;
		
		case 30:
		printf("thirty ");
		break;
		
		case 40:
		printf("fourty ");
		break;
		
		case 50:
		printf("fifty ");
		break;
		
		case 60:
		printf("sixty ");
		break;
		
		case 70:
		printf("seventy ");
		break;
		
		case 80:
		printf("eighty ");
		break;
		
		case 90:
		printf("ninty ");
		break;
		
		case 100:
		printf("hundred ");
		break;
		
		case 1000:
		printf("thousand ");
		break;
		
		case 100000:
		printf("lakh ");
		break;
		
		case 10000000:
		printf("crore ");
		break;
	}		
}	