//
// Created by Amine on 29/09/2021.
//

#include <stdio.h>
#include "fonction.h"

int exercice1 ()
{
    int valeur1 = 0;
    int valeur2 = 0;
    printf ( "Entrez svp la valeur de votre premier entier: \n " ) ;
    scanf( "%d" , &valeur1 ) ;
    printf ( " Entrez svp la valeur de votre deuxieme entier: \n " ) ;
    scanf ( "%d" , &valeur2 ) ;
    printf ( " La plus grande valeur est %d " , getMax( ( valeur1 ) , ( valeur2 ) ) ) ;
}

int exercice2()
{
    printf("Veuillez saisir un entier.\n>");
    int valeur = saisirentier;
    printf("L'entier saisi est %d \n", valeur );
    return 0;
}
int exercice3 ()
{
    int longeur = saisirentier ;
    printf ( " Entrez svp la valeur de la longeur de votre rectangle: \n " ) ;
    scanf( "%d" , &longeur ) ;
    int largeur = saisirentier ;
    printf ( " Entrez svp la valeur de la largeur de votre rectangle: \n " ) ;
    scanf( "%d" , &largeur );
    printf ( " L'aire de ce rectangle est %d \n " , calculaire( longeur , largeur ) ) ;
    printf ( " Le perimetre de ce rectangle est %d \n " , calculperimetre ( longeur , largeur ) ) ;
}


int exercice4()
{
    int valeur1 = saisirentier ;
    int valeur2 = 3 ;
    printf ( " Entrez svp la valeur : \n " ) ;
    scanf ( "%d" , &valeur1 ) ;
    if ( multipleoupas ( valeur1  , valeur2 ) == 1 )
    {
        printf ( " Cette valeur est divisible par 3 \n " ) ;
        if ( valeur1 >= 10 )
        {
            printf ( " Cette valeur est superieur ou egal à 10 \n " ) ;
        }
        else
        {
            printf ( " Cette valeur n'est pas superieur ou égal à 10 \n " ) ;
        }
    }
    else
    {
        printf ( " Cette valeur n'est pas divisible par 3 \n " ) ;
        if ( valeur1 >= 10 )
        {
            printf ( " Cette valeur est superieur ou egal à 10 \n " ) ;
        }
        else
        {
            printf ( " Cette valeur n'est pas superieur ou égal à 10 \n " ) ;
        }
    }
}

int exercice5()
{
    int note1 = saisirentier ;
    int note2 = saisirentier ;
    int note3 = saisirentier ;
    printf ( " Entrez svp votre note 1 comprise entre 0 et 20 : \n " ) ;
    scanf ( "%d" , &note1 );
    printf ( " Entrez svp votre note 2 comprise entre 0 et 20 : \n " ) ;
    scanf ( "%d" , &note2 );
    printf ( " Entrez svp votre note 3 comprise entre 0 et 20 : \n " ) ;
    scanf ( "%d" , &note3 ) ;
    printf ( " La moyenne de vos 3 notes est %d : \n ", calculmoyenne ( note1 , note2 , note3 ) );
}



