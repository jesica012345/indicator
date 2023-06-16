#include<stdio.h>

main()

{
	char ch[100];
	
	printf("ENTER STRING:-");
	gets(ch);
	
	char *p1;
	p1=&ch;
	
	printf("Your're strings length is=%d",strlen(p1));
}
