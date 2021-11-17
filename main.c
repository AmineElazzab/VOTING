#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
main(){
    char elec[10][10];
    char cand[5][10];
    int x,y,i,choix;
    do{
        printf("Nombre des condidats min(5): ");
        scanf("%d",&x);
    }while(x<5);


    for(i=0; i<5; i++){
           printf("Entrer candidat %d :", i+1);
           scanf("%s",&cand[i]);
    }
     do{
    printf("Nombre des electeurs: ");
    scanf("%d",&y);
     }while(y<10);

      for(i=0; i<10; i++){
           printf("Entrer CIN  min(10)%d :", i+1);
           scanf("%s",&elec[i]);
    }


    printf("\nAffichage des condidats: \n");
    for(i=0; i<x
    ; i++)
    {
           printf("%s \t",cand[i]);
    }
    return 0;
}
