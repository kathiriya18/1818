#include<stdio.h>

main()
{
     int a[]={2,4,6,8,10} ,i;
     int *p1;
     p1=a;
     int b[5],ans;
     int *p2;
     for(i=0;i<=4;i++)
     {
     	printf("%u =>%d\n",p1+i,*(p1+i));
	 }
	 printf("\n all element suqare :-\n\n");
	 for(i=0;i<=4;i++)
	 {
	 	ans=*(p1+i)*(*(p1+i));
	 	b[i]=ans;
	 }
	 p2=b;
	 for(i=0;i<=4;i++)
	 {
	 	printf("%u =>%d\n",p2+i,*(p2+i));
	 }

}