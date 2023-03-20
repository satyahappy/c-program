#include<stdio.h>
struct employee
{
    int empno=1;
};
int main()
{
    struct employee emp=(.empno=1,);
    printf("%d\n",emp.empno);
}