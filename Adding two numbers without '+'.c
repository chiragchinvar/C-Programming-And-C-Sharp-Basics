#include<stdio.h>
//#include<conio.h>
int add(int a,int b);
main(){
	int x,y,sum;
	printf("Enter the values for A & B: ");
	scanf("%d %d",&x, &y);
	sum=add(x,y);
	printf("%d",sum);
}
int add(int a, int b)
{
     int sum,carry; 
      if (b == 0) 
        return a;
      else
        sum = a^b; // add without carrying
        carry = (a&b) << 1; // carry, but don�t add
      return add(sum,carry); 
}
