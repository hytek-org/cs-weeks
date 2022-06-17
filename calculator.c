#include <stdio.h>

int main(void)
{
char op;
printf("Operator[+,-,*,/]::");

scanf("%c",&op);

float a,b,result;

printf("Enter no of A:\n");
scanf("%f",&a);
printf("Enter no of B:\n");
scanf("%f",&b);



if(op == '+')
{
result=a+b;
printf("Result:>>%.2f\n",result);
}
else if(op == '*')
{
result=a*b;
printf("Result:>>%.2f\n",result);
}
else if(op == '-')
{
result=a-b;
printf("Result:>>%.2f\n",result);
}
else if(op == '/'){
result = a/b;
printf("Result:>>%.2f\n",result);
}
else
{
printf("Invalid Choice:\n");
}


return 0;

}