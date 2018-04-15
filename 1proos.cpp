#include<stdio.h>
#include<conio.h>
struct resources
{
	bool question_paper;
	bool paper;
	bool pen;
	bool all_res;
};
int main()
{
	struct resources teacher[10];
	teacher[0].pen=true;		
	teacher[0].paper = false;
	teacher[0].question_paper = false;
	teacher[1].pen=false;		
	teacher[1].paper = true;
	teacher[1].question_paper = false;
	teacher[2].pen=false;		
	teacher[2].paper = false;
	teacher[2].question_paper = true;
	while(teacher[0].all_res==false || teacher[1].all_res==false || teacher[2].all_res==false)
	{
		int res1,res2;
		printf("Enter any two resources that you want to keep on the shared table");
		printf("\n Menu \n 1.Pen \n 2.Paper \n 3.Question paper ");
		scanf("%d%d",&res1,&res2);
		if(res1==1 && res2==2 && teacher[2].all_res==false)
		{
			teacher[2].all_res=true;
			printf("\n Third Student had completed his task");
		}
		if(res1==2 && res2==1 && teacher[1].all_res==false)
		{
			teacher[1].all_res=true;
			printf("\n Second student had completed his task");
		}
		if(res1==3 && res2==2 && teacher[0].all_res==false)
		{
			teacher[0].all_res=true;
			printf("\n First Student had completed his task");
		}
	}
	printf("\n Successfully all students completed their task's");
	return 0;
}
