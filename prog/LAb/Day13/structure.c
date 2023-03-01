#include <stdio.h>
int main()
{
    struct emp
    {
        int emp_no;
        float sal;
        char ename;
    } employee;
    employee.emp_no = 10;
    employee.sal = 5000;
    printf("%d", sizeof(employee));
}