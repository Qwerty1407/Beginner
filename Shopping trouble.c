#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float i = get_float("Price of goods: ");
    while(i <= 0)
    {
         i = get_float("Price of goods: ");
    }
    float j =get_float("You will pay: ");
    while(i > j)
    {
        printf("Sir/Ma'am we don't work on credit\n");
       j = get_float("You will pay: ");
    }
    if (j == i)
    {
        printf("Sir/Ma'am we owe no change.Thank you for buying from your store\n");
        printf("Come back soon\n");
    }
    //program is only letting them pay equal or higher
    else
    {
        float l = j - i;
        float c = l/25;
        float q = l/10;
        printf("We will give you quaters %f", c);
        printf(" or %f dimes\n", q);
    }
}
