#include <stdio.h>
int main(int argc, char const *argv[])
{	
	int n,count=0,printNum=0,last=0,current=1;
	printf("enter no of terms\n");
	scanf("%d",&n);
	while(count<n){
		printf("%d\n", printNum);
		last = current;
		current = printNum;
		printNum= last+current;
		count++;
	}
	
}