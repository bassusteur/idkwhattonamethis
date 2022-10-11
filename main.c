#include <stdio.h>
#include <time.h>

#define GRID 10
#define GRIDD (GRID*GRID)

struct px
{
    int index;
    char *val;
} pxs[GRID][GRID];

void cls(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

struct px init() 
{
    for(int i=0; i<GRID; i++)
    {
        for(int j=0; j<GRID; j++)
        {
            pxs[i][j].index = j;
            pxs[i][j].val = "■";
        }
    }
    return pxs[GRID][GRID];
}


struct px set(int x, int y, char *value) 
{
    pxs[x][y].val = value;

    return pxs[GRID][GRID];
}

char get(int x, int y)
{
    char get = pxs[x][y].val;
    return get;
}

int main()
{
    //time_t t;
    //srand((unsigned) time(&t));

    init();
    
    /*
    for(int x=0; x<GRID; x++)
    {
        for(int y=0; y<GRID; y++)
        {
            printf("pxs: %d %d - i: %d - char: %s\n",x,y,pxs[x][y].index,pxs[x][y].val);
        }
    }
    */
    set(1,1,"C");
    set(1,2,"u");
    set(1,3,"n");
    set(1,4,"t");

    set(3,1,"t");
    set(3,2,"o");
    set(3,3,"5");

    while(1){
        for(int a=0; a<GRID; a++)
        {
            printf("\n");
            for(int b=0; b<GRID; b++)
            {
                printf("%s ", pxs[a][b].val);
            }
        }
        printf("\n");
        cls();
    }

    return 0;
}
