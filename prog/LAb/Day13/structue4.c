#include<stdio.h>
#include<string.h>
struct employee 
{
    int emp_no; 
    float sal; 
    char ename[10]; 
};
int main()
{ 
    struct employee emp[5]={{10,50000,"Alex"},{11,50000,"Lexa"},{12,50000,"sona"},{13,50000,"mona"},{14,50000,"gona"}};
    printf("%d\n%s\n%f\n",emp[3].emp_no,emp[3].ename,emp[3].sal);
}
