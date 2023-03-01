#include<stdio.h>
struct TeamScore
{
    int Wickets;
    int score;
}ts ={2,325};
struct country
{
    char *name;
}coun = {"ïndia"};
int main()
{
    struct TeamScore tcon =ts;
    printf("%d %s %d",tcon.score,ts.Wickets,coun.name);
    return 0;
}
