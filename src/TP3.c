#include "../include/TP3.h"
#include <stdio.h>

/*De Youcef Amarouche à tout le monde:  09:25 AM
Conseil pour la manipulation des chaines de caractères. Les bibliothèques C contiennent plusieurs fonctions qui vous seront utiles lors du TP, vous avez <ctype.h> pour les fonctions sur les caractères et <string.h> pour les chaines de caractères.
Avant d'implémenter vos propres traitements sur les chaines de caractères,  vérifiez s'il existe des fonctions C qui le font. Ca vous éviteras du travail en plus.
Si elles ne sont pas dans ces deux bibliothèques, elle peuvent être dans une autre.
Google, stackoverflow et la documentation du langage C sont vos amis
https://fr.cppreference.com/w/c
Lien vers la documentation C*/



t_ListePositions* creer_liste_postions(){
    t_ListePositions* myListePositions = malloc(sizeof(t_ListePositions));
    if (!myListePositions)
    {
        return NULL;
    }
    
    myListePositions->debut=NULL;
    myListePositions->nb_elements=0;
    return myListePositions;
}



