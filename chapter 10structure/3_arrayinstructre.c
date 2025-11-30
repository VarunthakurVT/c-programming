#include <stdio.h>
struct emp
{
 int code;
 float salary;
 char name[10];
}
;
int main(){
    struct emp facebook[100];
    facebook[0].code=343;
    facebook[1].code=34;
   printf("%d\n %d", facebook[0].code,facebook[1].code) ;
//    the another way to declare the structure as follows
struct emp varun={1,23.0,"varun"};
printf("%d %f %s",varun.code,varun.salary,varun.name);
     return 0;
}