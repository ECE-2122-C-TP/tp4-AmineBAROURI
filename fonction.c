//
// Created by Amine on 29/09/2021.

#include <stdio.h>

int saisirentier( int entier1 )
{
    printf ( "Entrez svp la valeur de votre premier entier: \n " ) ;
    scanf( "%d" , &entier1 );
    return entier1 ;

}

int getMax( int entier1 , int entier2  )
{
    if ( entier1 < entier2 )
    {
        return entier2 ;
    }
    else if ( entier1 == entier2 )
    {
        return entier1 ;
    }
    else if ( entier1 > entier2 )
    {
        return entier1 ;
    }
}

int calculaire(int longeur  , int largeur )
{
    return longeur*largeur;
}

int calculperimetre(int longeur  , int largeur )
{
    return ( longeur*2 ) +( largeur*2 );
}

int multipleoupas( int valeur1  , int valeur2  )
{
    if ( valeur1%valeur2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int calculmoyenne ( int note1 , int note2 , int note3 )
{
    if ( note1 < 0 || note2 < 0 || note3 < 0 || note1 > 20 || note2 > 20 || note3 > 20)
    {
        return -1;
    }
    else
    {
        return ( note1 + note2 + note3 ) / 3;
    }
}
