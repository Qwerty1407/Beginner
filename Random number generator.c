#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    srand(time(0));

    for(int i = 0; i<4; i++)
        printf(" %d\n ", rand());

    return 0;
}