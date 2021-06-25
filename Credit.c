#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    printf("%ld\n", time(0));

    string prompt = "1: Pay with Visa\n\
2: Pay with Paypal\n\
3: Pay with Master Card\n";

    int i = get_int("%s", prompt);
    while (i != 1 && i != 2 && i != 3)
    {
        i = get_int("%s", prompt);
    }

    srand(time(0));
    int code = rand();
    printf("Your random code is %d\n", code);

    int v = 0;
    while (v != code)
    {
        v = get_int("Enter your random code: ");
    }

    printf("Thank you \n");
}
