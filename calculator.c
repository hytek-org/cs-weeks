#include <stdio.h>

void main()
{
char op;
float a,b,result;

printf("Enter no of A:\n");
scanf("%f",&a);
printf("Enter no of B:\n");
scanf(“%f”,&b);
printf("Operator[+,-,*,/]::\n");
fflush(stdin);
scanf("%c",&op);
if(op=='+')
{
result=a+b;
printf("Result:>>%.2f",result);
}
else if(op=='*')
{
result=a*b;
printf("Result:>>%.2f",result);
}
else if(op=='-')
{
result=a-b;
printf("Result:>>%.2f",result);
}
else if(op == '/'){
result = a/b;
printf("Result:>>%.2f",result);
}
else
{
printf("Invalid Choice:");
}

}