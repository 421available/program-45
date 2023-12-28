#include<stdio.h>
struct stu
{
	int sroll;
	char sname[20];
	int marks [5];
};
void main()
{
	struct stu s;
	int total=0;float avg;
	printf("Enter sroll");
	scanf("%d",& sroll);
	printf("Enter s name");
	scanf("%d",&s name);
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
		total=total+s marks[i]; 
		avg = (float) total/5;
	}
	printf("sroll:%d\n",sroll);
	printf("s name:%d\n",s name);
	printf("s total marks:%d\n",total);
	printf("s avg:d\n",s avg);
}
