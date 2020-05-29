#include <stdio.h>
int isCommon (char *a, char *b,int m,int n){
	for(int i=0;i<m;i++){
		for (int j=0;j<n;j++)
		{
			if(a[i]==b[j])
				return 1;
		}
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	char a[5] = {"arnab"};
	char b[5] = {"seema"};

	if(isCommon(a,b,5,5)){
		printf("good\n");
	}
	else{
		printf("i am cry, you is the because\n");
	}

}