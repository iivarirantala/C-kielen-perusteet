#include <stdio.h>

int main()
{
    //yksiulotteinen taulukko
    int ages[5]={21,45,12,6,32};

    printf("Eka alkio on %d\n",ages[0]);
    printf("Viimeinen alkio on %d\n",ages[4]);
    printf("Anna eka alkio\n");
    scanf("%d",&ages[0]);
    printf("Eka alkio on %d\n",ages[0]);

    //huom! alkiota ages [5] ei ole määritelty

    printf("alkio ages[5] on %d \n",ages[5]);

    //kaksiulotteinen taulukko

    int myArray[3][3]={
    {4,5,6},
    {7,8,9},
    {10,11,12}
    };

    printf("Eka rivin kolmas alkio = %d\n",myArray[0][2]);
    printf("Toka rivin toinen alkio = %d\n",myArray[1][1]);
    printf("Kolmannen rivin ensimmainen alkio = %d\n ",myArray[2][0]);

    //taulukkoa luettaessa numerot alkavat nollasta, ei ykkösestä!!





    return 0;
}
