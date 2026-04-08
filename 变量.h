#include<stdio.h>
#define GW "Greatwall"
#define NAME "Greatwall-WATCHING"
#define BOSS "PQD"
#define YEAR 2021
#define MATCH 7
#define DAY 21

int main()
{
    printf("%s成立于%d年%d月%d日", NAME, YEAR, MATCH, DAY);
    printf("%s is made by %s--\n", NAME, BOSS);
    printf("%s的域名是%s\n", NAME, GW);

    return 0;
}