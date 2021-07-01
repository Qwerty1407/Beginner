//Astraction and scope

#include <stdio.h>
#include <cs50.h>


int get_negative_int(void);
int main(void)
{
    //Define a function
    int x = get_negative_int();
    printf("Negative integers Couting ");
    printf("%i\n", x);
    while (x < 0)
   {
    printf("%i\n",x);
    x++;

   }
}

int get_negative_int(void)
{
    int x;
    do
   {
        x = get_int("Negative Integer: ");
   }
   while(x > -1);
   return x;
}
