#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{	
	int n,count=0,sum=0,temp,temp1,orgNumber;
	printf("enter no\n");
	scanf("%d",&n);
	temp=n;
	orgNumber=n;
	while(n!=0){
		n/=10;
		count++;
	}

	while(temp!=0){
		temp1=temp%10;
		sum += temp1*pow(10,count-1);
		temp/=10;
		count--;
	}

	if (sum==orgNumber)
		printf("yes the number is palindrome\n");
	else
		printf("not a palindrome number\n");
}