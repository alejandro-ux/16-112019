#include <stdio.h>
#include <stdlib.h>   

int main()
{

    int i,total;

    for(i=2;i<=100;i++){
        total = total + i;
        printf("%d+",i);
        i+=2;
    }

    printf("\n\nEl total es:%d\n\n",total);

    system("pause");
    return 0;
}

