#include <stdio.h>
int power(int a,int b){
		int prod=1;
	for (int i = 0; i < b; ++i)
	{
		prod*=a;
	}
	return prod;
}

int main(int argc, char const *argv[])
{
int a = power(10,2);
printf(" a = %d\n",a );	

}