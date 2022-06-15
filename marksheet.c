#include <stdio.h>
int main()
{
int rono;
char name[20];
float math,sci,eng,total,per;

printf("Enter the roll no:\n");
scanf("%d",&rono);
printf("Enter the name:\n");
scanf("%s",name);
printf("Your Name is ::: %s\n",name);
printf("Enter the maths marks:\n");
scanf("%f",&math);
printf("Enter the sci marks:\n");
scanf("%f",&sci);
printf("Enter the eng marks:\n");
scanf("%f",&eng);
total=math+sci+eng;
printf(" total Is=%f\n",total);
per=total/3;
printf(" Percantage Is=%f",per);
if(per<40)
{
printf("\n Fail");
}
else if(per>=40)
{
printf("\nGrade C");
}
else if(per>=75)
{
printf("\nGrade B");
}
else if(per>=90)
{
printf("\nGrade A");
}
else
{
printf("\nDist");
}
if(math<35||sci<35||eng<35)
{
printf("\nFail");
}
else
{
printf("\nPass");
}

}