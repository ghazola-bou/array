#include <stdio.h>
int main(){
    int i,n,nbr;
     printf("entrer la taille de tableaux :");
    scanf("%d", &n);
    int T[n];


    for (i = 0; i < n; i++)
    {
        printf("enter le nomber %d:", i + 1);
        scanf("%d", &T[i]);
    }

    printf("entrer le nomber que vous voulez recharche : ");
    scanf("%d", &nbr);

    int trouver = 0;
    int rembles =0;
    for (i = 0; i < n; i++)
    {

        if (T[i] == nbr)
        {
            trouver = 1;
            break;
        }
       
    }

    if (trouver == 1)
    {
        printf("yes it exists");
         printf(" \nentre de number :");
        scanf("%d",&rembles);
        T[i]=rembles;
        
    }else{
        printf("no it does not exist");
    }
    


}