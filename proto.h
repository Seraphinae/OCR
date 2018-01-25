#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	game(int nb_myster);
int	difficulty();
void	jeu_plus_moins();
void	affiche(int *tableau, int tailleTableau);
int	somme_tableau(int tableau[], int taille_tableau);
int	moyenne_tableau(int tableau[], int taille_tableau);
void	maximum_tableau(int tableau[], int taille_tableau, int max);
int	search_min(int tableau[], int taille_tableau);
int	search_max(int tableau[], int taille_tableau);
void	ordonner_tableau(int tableau[], int taille_tableau);
