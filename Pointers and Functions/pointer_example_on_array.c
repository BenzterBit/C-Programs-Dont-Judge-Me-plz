#include <stdio.h>
int give(int *a,int b){
	return *(a+b);
}

int main(int argc, char const *argv[])
{
int a[5];
for (int i = 0; i < 5; ++i)
{
	a[i] = i+3;
}
int a3 = give(a,3);
printf("a[3] would be %d and function returns %d\n",a[3], a3 );


}