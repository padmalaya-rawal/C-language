/* Find the factorial of the number using recursion */


#int main()
int rec(int);
int main()
{
	int a,fact;
	printf("Enter any number : ");
	scanf("%d", &a);				//let a=5
	
	fact=rec(a);
	printf("Factorial value: %\n",fact);  //120
	return 0;
}

int rec(int x)   
{
	int f;
	if (x==1)      
		return(1);
	
	else               
		f=x*rec(x-1);    //f=5*rec(4)= 5*4*rec(3) = 5*4*3*rec(2) = 5*4*3*2*rec(1) = 5*4*3*2*1 
	
	return f;      //120
}