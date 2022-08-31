#include <stdio.h>

int main()
{
    int nums[5]={2,4,6,8,10};
    for(int index=0; index <=4; index++){
        printf("Luku on %d\n",nums[index]);
    }
    printf("Anna uudet luvut!\n");
    for(int index=0; index<=4; index++){
        printf("Anna luku\n");
        scanf("%d",&nums[index]);
    }
    printf("Uudet luvut:\n");
    for(int index=0; index <=4; index++){
        printf("Luku on %d\n",nums[index]);
    }
    return 0;
}
