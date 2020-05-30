#include <stdio.h>
char* strcatL1 (char *s, char *t){
	int i=0,j=0;
	while(s[i] != '\0')
		i++;
	while((s[i]=t[j]) != '\0'){
		i++;
		j++;
	}
	return s;
}

void strcatL2 (char *s, char *t){
	while(*s++ != '\0');

	while((*s++ = *t++ ) != '\0');
}


int main(int argc, char const *argv[])
{
	char a[20] = {"amal "};
	char b[] = {"seema"};

	printf("level 1 code returns -> %s\n", strcatL1(a,b));
	strcatL2(a,b);
	printf("level 2 code returns -> %s\n", a);
	
	}