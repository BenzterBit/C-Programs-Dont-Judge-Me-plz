#include <stdio.h>
char* strcpyL1 (char *s, char *t){
	int i=0;
	while((s[i]=t[i]) != '\0')
		i++;
	return s;
}

void strcpyL2 (char *s, char *t){
	while((*s=*t) != '\0'){
		s++;
		t++;
	}
}

void strcpyL3 (char *s, char *t){
	while((*s++=*t++) != '\0');
}

int main(int argc, char const *argv[])
{
	char a[6];
	char b[] = {"seema"};

	printf("level 1 code returns -> %s\n", strcpyL1(a,b));
	strcpyL2(a,b);
	printf("level 2 code returns -> %s\n", a);
	strcpyL3(a,b);
	printf("level 1 code returns -> %s\n", a);
}