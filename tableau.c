#include <stdio.h>
#include <stdlib.h>


void affiche(int *tableau, int tailleTableau)
{
    int i;

    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

int	somme_tableau(int tableau[], int taille_tableau)
{
  int	compteur;
  int	i;
  
  i = 0;
  compteur = 0;
  while (i < taille_tableau)
    {
      compteur += tableau[i];
      i++;
    }
  return(compteur);
}

int	moyenne_tableau(int tableau[], int taille_tableau)
{
  int	compteur;
  int	i;
  int	moyenne;
  
  i = 0;
  compteur = 0;
  while (i < taille_tableau)
    {
      compteur += tableau[i];
      i++;
    }
  moyenne = (compteur / taille_tableau);
  return(moyenne);
}

void	copier_tableau(int tableau[], int tableau_copie[], int taille_tableau)
{
  int	i;

  i = 0;
  while (i < taille_tableau)
    {
      tableau_copie[i] = tableau[i];
      i++;
    }
  affiche(tableau_copie, 4);
}

void	maximum_tableau(int tableau[], int taille_tableau, int max)
{
  int	i;

  i = 0;
  while (i < taille_tableau)
    {
      if (tableau[i] > max)
	tableau[i] = 0;
      i++;
    }
  affiche(tableau, 4);
}

int	search_min(int tableau[], int taille_tableau)
{
  int	i;
  int	min;

  i = 1;
  min = tableau[0];
  while (i < taille_tableau)
    {
      if (tableau[i] < min)
	min = tableau[i];
      i++;      
    }
  return(min);
}

int	search_max(int tableau[], int taille_tableau)
{
  int	i;
  int	max;

  i = 1;
  max = tableau[0];
  while (i < taille_tableau)
    {
      if (tableau[i] > max)
	max = tableau[i];
      i++;      
    }
  return(max);
}

void	ordonner_tableau(int tableau[], int taille_tableau)
{
  int	i;
  int	j;
  int	k;
  int	min;
  int	max;
  int	tableau_ordonne[taille_tableau];
  
  i = 0;
  j = 0;
  k = 0;
  min = search_min(tableau, taille_tableau);
  max = search_max(tableau, taille_tableau);
  while (min <= max)
    {
      while (j < taille_tableau)
	{
	  if (tableau[j] <= min)
	    {
	      tableau_ordonne[k] = tableau[j];
	      k++;
	    }
	  j++;
	}
      min++;
    }
  affiche(tableau_ordonne, taille_tableau);
}

int	main(int argc, char *argv[])
{
  int	tableau[4] = {10, 15, 3};
  int	tableau_copie[4];

  printf("%d", somme_tableau(tableau, 4));
  printf("\n");
  printf("%d", moyenne_tableau(tableau, 4));
  printf("\n");
  copier_tableau(tableau, tableau_copie, 4);
  printf("\n");
  maximum_tableau(tableau, 4, 10);
  printf("\n");
  ordonner_tableau(tableau, 4);

  return 0;
}
