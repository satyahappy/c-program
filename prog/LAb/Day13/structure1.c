#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp
    {
        int emp_no;
        float sal;
        char ename;
    } employee;
int main()
{
    
    employee.emp_no = 10;
    employee.sal = 5000;
    (strcpy(employee.ename,"SDI"));
    printf("%d\n", sizeof(employee));
    printf("%s\n",employee.ename);
}
