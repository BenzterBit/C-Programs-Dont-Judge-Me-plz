#include <stdio.h>
void stringCopy(char *a,char *b){
	while(*b++=*a++); //post increment used beautifully
}

int main(int argc, char const *argv[])
{
	char a[]="I Feel Alive";
	char b[15];
	stringCopy(a,b);
	printf("%s\n",b);
}