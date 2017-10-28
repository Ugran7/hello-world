#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int x = 12;
    printf("How minutes for your shower: \n");
    int y = get_int();
    printf("bottles: %d\n", x * y);
}