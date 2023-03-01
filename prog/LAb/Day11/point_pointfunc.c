#include<stdio.h>  
int (*func)(int,int);
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);
int main()
{
    int res;
    func=&add;
    res=(*func)(100,20);
    printf("value of add %d\n",res);
    func=&sub;
    res=(*func)(100,20);
    printf("value of sub %d\n",res);
    func=&mul;
    res=(*func)(100,20);
    printf("value of mul %d\n",res);
    func=&div;
    res=(*func)(100,20);
    printf("value of div %f\n",res);
    func=&mod;
    res=(*func)(100,20);
    printf("value of mod %f\n",res);
}
int add(int p,int q)
{
    return p+q;
}
int sub(int p,int q)
{
    return p-q;
}
int mul(int p,int q)
{
    return p * q;
}
int div(int p,int q)
{
    return p / q;
}
int mod(int p,int q)
{
    return p%q;
}
