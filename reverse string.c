#include<stdio.h>
#include<string.h>
int main(){
	char ch[1000];
	int size=0,i=0;
	puts("enter a string : ");
	gets(ch);
	puts("original string is : ");
	puts(ch);
	while(ch[i]!='\0'){
		size++;
		i++;
	}
	puts("reverse of string is : ");
	for(i=size-1;i>=0;i--){
		printf("%c",ch[i]);
	}
}
