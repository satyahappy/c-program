#include<stdio.h>
int main()
{
    int a=10;
    float f=10.4;
    char c='a';
    void *p=&a;
    void *p1=&f;
    void *p2=&c;
    printf("value of a is %d\n",*(int*)p);
    printf("value of a is %f\n",*(float*)p1);
    printf("value of a is %c\n",*(char*)p2);
}
