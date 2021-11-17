
//Number to string program
#include<stdlib.h>
#include<stdio.h>

void f1(int num)
{ switch(num)
 {
  case 1:printf(" ONE ");
         break;
  case 2:printf(" TWO ");
         break;
  case 3:printf(" THREE ");
         break;
  case 4:printf(" FOUR ");
         break;
  case 5:printf(" FIVE ");
         break;
  case 6:printf(" SIX ");
         break;
  case 7:printf(" SEVEN ");
         break;
  case 8:printf(" EIGHT ");
         break;
  case 9:printf("NINE ");
         break;
 }
}

void f2(int num)
{
	switch(num)
	{   case 10:printf(" TEN ");
         break;
         case 11:printf(" ELEVEN ");
         break;
         case 12:printf(" TWELVE ");
         break;
         case 13:printf(" THIRTEEN ");
         break;
         case 14:printf(" FOURTEEN ");
         break;
         case 15:printf(" FIFTEEN ");
         break;
         case 16:printf(" SIXTEEN ");
         break;
         case 17:printf(" SEVENTEEN ");
         break;
         case 18:printf(" EIGHTEEN ");
         break;
         case 19:printf(" NINETEEN ");
         break;
		
	}
	
}

void f3(int num)
{
	switch(num)
	{
		case 2:printf(" TWENTY ");
         break;
		case 3:printf(" THIRTY ");
         break;
		case 4:printf(" FORTY ");
         break;
		case 5:printf(" FIFTY ");
         break;
		case 6:printf(" SIXTY ");
         break;
		case 7:printf(" SEVENTEEN ");
         break;
		case 8:printf(" EIGHTY ");
         break;
		case 9:printf(" NINETY ");
         break;
	}
}

void f4(int num)
{
	int a=num/10;
	f3(a);
	int b=num%10;
	if(b!=0)
	f1(b);
	
}


void f5(int num)
{
	int z=num/100;
	f1(z);
	printf(" HUNDRED ");
	int y=num%100;
	if(y!=0)
	f4(y);
	
}

void f6(int num)
{
	int j=num/1000;
	if(j<=9)
		f1(j);
	
	else if(j>9&&j<20)
		f2(j);
	
	else
	f4(j);
	printf(" THOUSAND ");
	
	int k=num%1000;
	if(k!=0)
	f5(k);
}

void f7(int n)
{
	int m=n/100000;
	if(m<10)
	f1(m);
	
	else if(m>9 && m<20)
	f2(m);
	
	else
	f4(m);
	
	printf(" LACS ");
	
	int g=n%100000;
	if(g!=0)
	f6(g);
	}

void f8(int s)
{
	int t=s/10000000;
	if(t<10)
	f1(t);
	
	else if(t>9 && t<20)
	f2(t);
	
	else
	f4(t);
	
	printf(" CRORE ");
	
	int r=s%10000000;
	if(r!=0)
	f7(r);
	}
int main()//main() start
{
	
	
	int num,h;
		
	printf("\nEnter any number to convert number to string ::  ");
	scanf("%d",&h);
	if(h<0)
	{
		num=-(h);
		printf("MINUS");
	}
	else
	{
		num=h;
	}
	
	if(num<0 || num>=1000000000)//for only + numbers
	{
		printf("Enter number between 0 and 100 crore");
		exit(0);
	}
	else if(num==0)//for 0 input
	{
		printf("\tZERO");
		exit(0);
		}
	if(num<10)
		f1(num);
	else if(num<20)
		f2(num);
		
	else if(num<100)
		f4(num);
		
	else if(num<1000)
		f5(num);
	else if(num<100000)
		f6(num);
		
		else if(num<10000000)
		f7(num);
		else if(num<1000000000)
		f8(num);
		printf(" Only.");
		
		
	return 0;
}//main()end
