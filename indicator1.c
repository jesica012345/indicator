#include<stdio.h>

swap(int *n1,int *n2)

{
	int *temp;
	temp=*n2;
	*n2=*n1;
	*n1=temp;
	
	printf("\n______************______\n\n");
	
	printf("YOUR SWAPPED A VALUE IS:-%d\n",*n1);
	printf("YOUR SWAPPED B VALUE IS:-%d\n",*n2);
}

main()

{
	int a,b;
	printf("Enter the value of A:-");
	scanf("%d",&a);
	
	printf("Enter the value of B:-");
	scanf("%d",&b);
	
	int *p1;
	int *p2;
	
	p1=&a;
	p2=&b;
	
	swap(p1,p2);
}

