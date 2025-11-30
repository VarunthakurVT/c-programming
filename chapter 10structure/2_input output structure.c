#include <stdio.h>
struct emp
{
    int emp_code;
    float salary;
    char name[10];
};
int main(){
    struct emp  e1;
    printf("enter the emp_code\n");
    scanf("%d",&e1.emp_code);
    printf("enter emp name\n");
    scanf("%s",&e1.name);
    printf("enter the salary\n");
    scanf("%f",&e1.salary);
    printf("%d %s %f",e1.emp_code,e1.name,e1.salary);



     return 0;
}