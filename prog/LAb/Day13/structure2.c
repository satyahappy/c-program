#include<stdio.h>
#include<string.h>
struct employee
{
    int empno; 
    float sal;
    char ename[20];
};
struct employee emp1,emp2,emp3;
int main()
{
    emp1.empno=10;
    strcpy(emp1.ename,"Satya");
    emp1.sal=50000;
    printf("%d\n%s\n%f",emp1.empno,emp1.ename,emp1.sal);
}
    