
#include <stdio.h>
#include <cs50.h>
int main(void)
{
    printf("Please write y or n to answer\n");
    char s = get_char("Do u agree that Covax is better than Covi-Shield?\n");
    
    if (s=='y'|| s =='Y')
    {
        printf("Agreed.\n");
    }
    else if (s == 'n' || s== 'N')
    {
        printf("Not agreed.\n");
    }
}
