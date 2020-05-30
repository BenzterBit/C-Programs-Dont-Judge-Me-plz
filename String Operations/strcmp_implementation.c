#include <stdio.h>
int strcmpLMax(char *s, char *t){
	while(*s == *t){
		if(*s == '\0')
			return 0;
		s++; // even if condition is wrong it
		     // would still increment at the end of comparison
		t++;
	}
	return *s - *t;

}

int main(int argc, char const *argv[])
{
	char a[] = {"amal_"};
	char b[] = {"seema"};

	printf("strcmp returns %d\n", strcmpLMax(a,b));
	
	}