#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char a;
        scanf(" %c",&a);
        if(a=='b' || a=='B')
            printf("BattleShip\n");
        else if(a=='c' || a=='C')
            printf("Cruiser\n");
        else if(a=='d' || a=='D')
            printf("Destroyer\n");
        else if(a=='f' || a=='F')
            printf("Frigate\n");
    }
    return 0;
}
