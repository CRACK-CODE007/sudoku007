#include <stdio.h>
#include <stdlib.h>

// Fonction pour afficher le menu du jeu Sudoku
void afficherMenu() {
    printf("\n===== Menu du Jeu Sudoku =====\n");
    printf("1. Nouvelle partie\n");
    printf("2. Charger partie\n");
    printf("3. Règles du jeu\n");
    printf("4. Quitter\n");
    printf("=============================\n");
}

// Fonction pour commencer une nouvelle partie de Sudoku
void nouvellePartie() {
    printf("Une nouvelle partie de Sudoku commence.\n");
    // Ajouter ici la logique pour initialiser une nouvelle partie de Sudoku
}

// Fonction pour charger une partie sauvegardée
void chargerPartie() {
    printf("Chargement de la partie enregistrée...\n");
    // Ajouter ici la logique pour charger une partie sauvegardée
}

// Fonction pour afficher les règles du jeu Sudoku
void afficherRegles() {
    printf("Règles du jeu Sudoku :\n");
    printf("Le Sudoku est un jeu de logique où vous devez remplir une grille de 9x9 avec des chiffres de 1 à 9, de telle sorte que chaque ligne, chaque colonne et chaque carré de 3x3 contient tous les chiffres de 1 à 9 sans répétition.\n");
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
                printf("Merci d'avoir joué au Sudoku !\n");
                break;

            default:
                printf("Choix invalide. Veuillez sélectionner une option valide.\n");
                break;
        }

    } while (choix != 4);

    return 0;
}
