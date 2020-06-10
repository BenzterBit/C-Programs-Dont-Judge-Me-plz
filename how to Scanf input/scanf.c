#include <stdio.h>
int main(){
int n1,n2;
char c;
printf("enter 2 nos you want to operate upon\n");
scanf("%d%d",&n1,&n2);
/*
so if you are writing the above as 
printf("%d%d ",&n1,&n2); then as there is a space after the 
second "%d" , that would not work 
*/ 
printf("enter an operator ( +,-,*,/)\n");
scanf(" %c",&c); 
/*
as you have pressed "enter" key after inputting in the last scanf
here you need to give a space before "%c" like
" %c" , the space will supress the Previous input ENTER character
*/ 
switch(c){
case '+': printf("%d\n", n1+n2 ); break;
case '-': printf("%d\n", n1-n2 ); break;
case '*': printf("%d\n", n1*n2 ); break;
case '/': printf("%d\n", n1/n2 ); break;
default: printf("not a valid operator\n");
}
return 0;
}
