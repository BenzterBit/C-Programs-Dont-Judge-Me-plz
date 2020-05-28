#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,j=1;
	printf("enter integer\n");
	scanf("%d",&i);
	int flag=0;// 0 is a prime , 1 is not a prime 
	while(j<=i){
		if(i%j==0 && (j!=1 && j!=i)){
			flag=1;
			break;
		}

		j++;
	}
	if(flag)
		printf("not a prime\n");
	else
		printf("prime\n");

	}