//
//  main.c
//  plus ou moins jeux
//
//  Created by yacine abi ayad on 07/02/2017.
//  Copyright © 2017 yacine abi ayad. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    int joueur,niveaux,MAX=0,myster,nombre,compteur,rejouer;
    const int MIN=0;
    do{// relancer une nouvel partie
    do {// relancer le menu si le nombre de joueur n'est pas 1 ou 2
            printf("*** BINEVENUE DANS LE JEUX PLUS OU MOINS ***\n veuillez choisir le nombre de joueur\n"); // choisir le nombre de joueur
            scanf("%d",&joueur);  } while (joueur<1||joueur>2);
        if (joueur==1) // 1 seul joueur
        {   do {// relancer le menu si le niveaux choisi n'est pas compris entre 1 et 3
            printf(" 1/ niveaux 1 (0-100)\n 2/ niveaux 2 (0-1000)\n 3/ niveaux 3 (0-10000)\n");scanf("%d",&niveaux);  } while (niveaux<1||niveaux>3);
           switch (niveaux) { // choisir le niveaux
                case 1: MAX=100;    break;
                case 2: MAX=1000;   break;
                case 3: MAX=10000;  break;
                default: printf(" veuillez choisir un des trois niveaux");
                break;}
            srand((unsigned int)time(NULL)); // choix du nombre au hasard
            myster= (rand()%MAX-MIN+1)-MIN;
            printf(" l'ordinateur va choisir un nombre au hasard essayer de le trouver\n entrer un nombre entre 0 et %d\n",MAX);
            do{ scanf("%d",&nombre);  // compare entre le nombre entrer et le nombre myster
                compteur++;
                if (nombre<myster) {printf("plus grand\n");}
                else if (nombre>myster) {printf("plus petit\n");}
                else printf("bravo vous avez reussi a trouver le nombre myster en %d\n",compteur); } while(nombre!=myster);
        }
        else if (joueur==2) // deux joueur
        {   printf("le premier joueur doit choisir un nombre myster\n");scanf("%d",&myster); // le premier joueur entre un nombre
            printf("le deuxieme joueur doit essayer de trouver le nombre myster\n"); // le deuxieme joueur essaye de le trouver
          do
            {   scanf("%d",&nombre);
                compteur++;
                if (nombre<myster) {printf("plus grand\n");}
                else if (nombre>myster) {printf("plus petit\n");}
                else printf("bravo vous avez reussi a trouver le nombre myster en %d\n",compteur);}while(nombre!=myster);
        }
        else printf("veuillez choisir un nombre de joueur entre 1 et 2");
        
        printf("appuiez sur un nombre pour relancez une partie si non appuiez sur 0");scanf("%d",&rejouer); } while(rejouer!=0);
        
    return 0;
}
