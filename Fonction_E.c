# stocke le dictionnaire issu de l’arbre de Huffman dans un fichier txt.
void createDictionnaryTxt(FILE *fp, Node *temp, char *bin)
{
    if (temp->droite == NULL && temp->gauche == NULL)
       fprintf(fp, "%c :%s\n", temp->letter, bin);
       #renvoyer la longueur de la chaine ecrite ?
    else
    {
        char *new_bin_gauche = malloc(sizeof(char) * (strlen(bin) + 1));
        strcpy(new_bin_gauche, bin);
        strcat(new_bin_gauche, "0");

        char *new_bin_droite = malloc(sizeof(char) * (strlen(bin) + 1));
        strcpy(new_bin_droite, bin);
        strcat(new_bin_droite, "1");

        createDictionnaryTxt(fp, temp->gauche, new_bin_gauche);
        createDictionnaryTxt(fp, temp->droite, new_bin_droite);
    }   
    /*strlen( const char * chaine de caractère ) = 
    calculer la longueur, exprimée en nombre de caractères, de la chaîne de caractères
    
    strcpy( char * destination, const char * source ) = 
    Cette fonction permet de copier le contenu d une chaîne de caractères dans une autre

    strcat( char * destination, const char * source ) = 
    Cette fonction permet de rajouter à une chaîne de caractères déjà existante le contenu d'une seconde.*/
    #lapetitemodif

    
}