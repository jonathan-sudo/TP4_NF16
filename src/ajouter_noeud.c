#include "../include/ajouter_noeud.h"
#define SUCCES 1

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ajouter_noeud
 *  Description:  
 * =====================================================================================
 */

// TODO A modifier 
/**
 * @brief Crée une liste de positions vide
 * @return Renvoie la liste, si echec renvoie NULL
*/

t_Noeud *rechercher_noeud(t_Index *index, t_Noeud *noeud)
{
    t_Noeud *noeudEnCours = index->racine;
    char *motEnCours;
    while(noeudEnCours != NULL){
        strcpy(motEnCours,noeudEnCours->mot); 
        if (!strcmp(motEnCours,noeud->mot)){
            printf("Le mot est déjà présent dans l'abr, rien n'a été ajouté\n");
            return NULL; 
        }
        else if(strcmp(motEnCours,noeud->mot)>0){
        // noeudPrecedent->mot est lexicalement plus grand que mot
            if(noeudEnCours->filsDroit == NULL){
                return(noeudEnCours);
            }
            noeudEnCours = noeudEnCours->filsDroit;
        } else {
        // noeudPrecedent->mot est lexicalement plus petit que mot
            if(noeudEnCours->filsGauche == NULL){
                return(noeudEnCours);
            }
            noeudEnCours = noeudEnCours->filsGauche;
        }
    }
    return noeudEnCours;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ajouter_noeud
 *  Description:  
 * =====================================================================================
 */
int ajouter_noeud ( t_Index *index, t_Noeud *noeud) 
{
    if (index == NULL){
        printf("Erreur : l'index fourni en paramètre n'existe pas\n");
        return !SUCCES;
    }
    t_Noeud *noeudPrecedent = rechercher_noeud(index,noeud);

    if (noeudPrecedent == NULL){
        printf("Erreur lors de l'ajout du noeud\n");
        return !SUCCES;
    }
    if(strcmp(noeudPrecedent->mot,noeud->mot)>0){
        // noeudPrecedent->mot est lexicalement plus grand que mot
        noeudPrecedent->filsDroit = noeud;
        return SUCCES;
    } else if(strcmp(noeudPrecedent->mot,noeud->mot)<0) {
        // noeudPrecedent->mot est lexicalement plus petit que mot
        noeudPrecedent->filsGauche = noeud;
        return SUCCES;
    }


    return SUCCES;
}		/* -----  end of function ajouter_noeud  ----- */

