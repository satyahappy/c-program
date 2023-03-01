#include<stdio.h>
#include<string.h>
#define MAX 5
struct employee 
{
    int emp_no; 
    float sal;
    char ename[10]; 
};
int main()
{
    struct employee emp[5]={{10,50000,"Alex"},{11,50000,"Lexa"},{12,50000,"sona"},{13,50000,"mona"},{14,50000,"gona"}};
    for(int i=0;i<5;i++)
    {
        printf("%s %d %f\n",emp[i].ename,emp[i].emp_no,emp[i].sal);
    }
}