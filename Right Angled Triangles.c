#include <stdio.h>
#include <cs50.h>

/*
height: h
#
##
###
####
#####
... h times
*/

int main(void)
{
    int h = get_int("Height: ");
    while (h <= 0)
    {
        h = get_int("Height: ");
    }

    for(int i = 0; i <= h; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("$");
        }
    
      printf("\n");  
    }
}
