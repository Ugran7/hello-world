#include <stdio.h>

int main(void)
{
    float change = 0;
    int cent = 0;
    int coin = 0;
    int sum_coin = 0;
    int quarter = 25;
    int dime = 10;
    int nikel1 = 5;
    int penny = 1;

    do
    {
        printf("0 hai! How much change is owed?\n");
        change get_float();
    }
    while(change<=0);

change = change * 100;
cent = round(change);
