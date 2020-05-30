#include <stdio.h>
void squeeze(char *s, int c){
	int i,j;
	for(i=0,j=0; s[i]!='\0';i++)
		if(s[i]!=c)
			s[j++]=s[i];
	s[j]='\0';
}

int main(int argc, char const *argv[])
{
	char a[] = {"raumu"};
	//we want to remove all occurances of 'u'
	squeeze(a,'u'); 
	printf("string raumu has now become the True name -> %s\n", a);
	
	}