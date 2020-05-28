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
	printf("individual digits raised to power of %d\n",count);

	while(temp!=0){
		temp1=temp%10;
		sum += pow(temp1,count);
		temp/=10;
	}

	if(orgNumber==sum)
		printf("the entered number is an armstrong number\n");
	else
		printf("the entered number is not an armstrong number\n");


}