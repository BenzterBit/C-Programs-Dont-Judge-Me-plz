#include <stdio.h>
void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char const *argv[])
{
int a=3,b=4;
swap(&a,&b);
printf("after swapping a=%d and b=%d\n",a,b );

}