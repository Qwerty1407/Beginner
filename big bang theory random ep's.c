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
    //i = season
    int i = 12;
    
    int e = 0;
    e++;
    if(e == 25)
    {
        e = 0;
        return e;
    }
    //e = episode
    int a;
    
    int y = 256;
    int f = 1;
    f++;
    while(y > f)
    {
        printf("Season - %i ep - %i\n", i , e);
        e++;
        if(e == 25)
            {
                e = 0;
                return e;

            }
    }

}
