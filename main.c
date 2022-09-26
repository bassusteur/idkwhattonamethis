#include <stdio.h>
#include <time.h>

#define GRID 20
#define GRIDD (GRID*GRID)

struct px
{
    int index;
    char val;
    int x;
    int y;
} pxs[GRIDD];

void csr() {printf("\ec");}

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    
    for(int i=0; i<GRIDD; i++)
    {
        pxs[i].index = i;
        pxs[i].x = i;
        pxs[i].y = i;

        //printf("%c ", pxs[i].val);

    }

    csr();
    for(int a=0; a<GRID; a++)
    {
        printf("\n");
        for(int b=0; b<GRID; b++)
        {
            char randomletter[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
            pxs[a*b].val = randomletter[rand() % 25];
            printf("%c ", pxs[a*b].val);
        }
    }
    printf("\n");

    return 0;
}
