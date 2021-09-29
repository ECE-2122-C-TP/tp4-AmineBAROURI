//
// Created by Amine on 29/09/2021.
//

#ifndef TP4_FONCTION_H
#define TP4_FONCTION_H

#endif //TP4_FONCTION_H

/*Procédure pour appeler saisirdeuxentier*/
/* IN : Entier1 ( entier ) et Entier 2 ( entier )  */
/* OUT : pas de retour */
int saisirentier ( int entier1 ) ;


/*Procédure pour appeler l'exercice 1*/
/* IN : Entier1 ( entier ) et Entier 2 ( entier ) , 2 valeurs dont on veut savoir quel est le plus grand */
/* OUT : La plus grande valeur ( entier ) entre Entier1 et Entier2 */
int getMax ( int entier1 , int entier2  ) ;

/* Procédure pour appeler la fonction calculaire */
/* IN : longeur ( entier ) et largeur ( entier )  */
/* OUT : L'aire ( entier ) correspondant à la longeur et à la largeur entré  */
int calculaire (int longeur , int largeur ) ;


/* Procédure pour appeler la fonction calculperimetre */
/* IN : longeur ( entier ) et largeur ( entier )  */
/* OUT : Le perimetre ( entier ) correspondant à la longeur et à la largeur entré  */
int calculperimetre (int longeur , int largeur ) ;


/* Procédure pour appeler la fonction multipleoupas */
/* IN : 2 valeurs (entiers)  */
/* OUT : Renvoie 1 si c'est vrai et renvoie 0 si c'est faux  */
int multipleoupas ( int valeur1  , int valeur2  );

/* Procédure pour appeler la fonction calculmoyenne */
/* IN : 3 notes (entiers)  */
/* OUT : Renvoie -1 si une des notes n'est pas comprise entre 0 et 20 et renvoie la moyenne si c'est la conditions est respecté  */
int calculmoyenne ( int note1 , int note2 , int note3 );