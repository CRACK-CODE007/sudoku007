#include <stdio.h>
#include <stdlib.h>

// Fonction pour afficher le menu du jeu Sudoku
void afficherMenu() {
    printf("\n===== Menu du Jeu Sudoku =====\n");
    printf("1. Nouvelle partie\n");
    printf("2. Charger partie\n");
    printf("3. R�gles du jeu\n");
    printf("4. Quitter\n");
    printf("=============================\n");
}

// Fonction pour commencer une nouvelle partie de Sudoku
void nouvellePartie() {
    printf("Une nouvelle partie de Sudoku commence.\n");
    // Ajouter ici la logique pour initialiser une nouvelle partie de Sudoku
}

// Fonction pour charger une partie sauvegard�e
void chargerPartie() {
    printf("Chargement de la partie enregistr�e...\n");
    // Ajouter ici la logique pour charger une partie sauvegard�e
}

// Fonction pour afficher les r�gles du jeu Sudoku
void afficherRegles() {
    printf("R�gles du jeu Sudoku :\n");
    printf("Le Sudoku est un jeu de logique o� vous devez remplir une grille de 9x9 avec des chiffres de 1 � 9, de telle sorte que chaque ligne, chaque colonne et chaque carr� de 3x3 contient tous les chiffres de 1 � 9 sans r�p�tition.\n");
}

int main() {
    int choix;

    do {
        afficherMenu();
        printf("Choisissez une option : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                nouvellePartie();
                break;

            case 2:
                chargerPartie();
                break;

            case 3:
                afficherRegles();
                break;

            case 4:
                printf("Merci d'avoir jou� au Sudoku !\n");
                break;

            default:
                printf("Choix invalide. Veuillez s�lectionner une option valide.\n");
                break;
        }

    } while (choix != 4);

    return 0;
}
