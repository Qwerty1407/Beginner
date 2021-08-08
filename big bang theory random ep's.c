//go to wheelofnames.com and paste the result
#include <stdio.h>
#include <cs50.h>
//This is Big Bang Theory all episodes
// S01-  17
// S02-  23
// S03-  23
// S04-  24
// S05-  24
// S06-  24
// S07-  24
// S08-  24
// S09-  24
// S10-  24
// S11-  24
// S12-  24
int main(void)
{
    int Season[13];
     Season[1] = 1;
     Season[2] = 1;
     Season[3] = 1;
     Season[4] = 1;
     Season[5] = 1;
     Season[6] = 1;
     Season[7] = 1;
     Season[8] = 1;
     Season[9] = 1;
     Season[10] = 1;
     Season[11] = 1;
     Season[12] = 1;

     while(Season[1] < 18)
     {
        printf("Season 1 ep - %i\n", Season[1]);
        Season[1]++;
     }
    while(Season[2] < 24)
    {
        printf("Season 2 ep - %i\n", Season[2]);
        Season[2]++;
    }

    while(Season[3] < 24)
    {
        printf("Season 3 ep - %i\n", Season[3]);
        Season[3]++;
    }

    while(Season[4] < 25)
    {
        printf("Season 4 ep - %i\n", Season[4]);
        Season[4]++;
    }

    while(Season[5] < 25)
    {
        printf("Season 5 ep %i\n", Season[5]);
        Season[5]++;
    }

    while(Season[6] < 25)
    {
        printf("Season 6 ep - %i\n", Season[6]);
        Season[6]++;
    }

    while(Season[7] < 25)
    {
        printf("Season 7 ep - %i\n", Season[7]);
        Season[7]++;
    }

    while(Season[8] < 25)
    {
        printf("Season 8 ep - %i\n", Season[8]);
        Season[8]++;
    }

    while(Season[9] < 25)
    {
        printf("Season 9 ep %i\n", Season[9]);
        Season[9]++;
    }

    while(Season[10] < 25)
    {
        printf("Season 10 ep - %i\n", Season[10]);
        Season[10]++;
    }

    while(Season[11] < 25)
    {
        printf("Season 11 ep - %i\n", Season[11]);
        Season[11]++;
    }

    while(Season[12] < 25)
    {
        printf("Season 12 ep - %i\n", Season[12]);
        Season[12]++;
    }
}
