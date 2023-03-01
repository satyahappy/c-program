#include<stdio.h>
#include<string.h>
struct employee
{
    int empno; 
    float sal;
    char ename[20];
};
int main()
{
    struct employee emp1={10,'Alex',5000};
    printf("%d\n%s\n%f",emp1.empno,emp1.ename,emp1.sal);
}