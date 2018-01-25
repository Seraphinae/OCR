#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	game(int nb_mystere)
{
  int	nb_entre;
  int	i;

  i = 0;
  nb_entre = 0;
  
  while (nb_entre != nb_mystere)
    {
      printf("Quel est le nombre ?\n");
      scanf("%d", &nb_entre);
      i++;

      if (nb_entre < nb_mystere)
	{
	  printf("C'est plus !\n \n");
	}
      else if (nb_entre > nb_mystere)
	{
	  printf("C'est moins !\n \n");
	}
      else
	{
	  printf("Bravo, vous avez trouve en %d essai(s) !\n \n", i);
	}
    }
}


int	difficulty()
{
  int	dif;

  
  printf("Quel difficulté voulez vous choisir ?\n 100, 1 000 ou 10 000 ?\n");
  scanf("%d", &dif);
  
  while(dif != 100 || dif != 1000 || dif != 10000)
    {
      if (dif == 100)
	{
	  printf("Vous avez choisi la difficulte de niveau 1\n");
	  return(100);
	}
      else if (dif == 1000)
	{
	  printf("Vous avez choisi la difficulte de niveau 2\n");
	  return(1000);
	}
      else if (dif == 10000)
	{
	  printf("Vous avez choisi la difficulte de niveau 3\n");
	  return(10000);
	}
      else
	{
	  printf("Vous n'avez pas rentré une difficulté valide, veuillez choisir entre 100, 1000 et 10 000.\n");
	  difficulty();
	}
    }
}

int	main(int argc, char** argv)
{
  int	difficulte;
  int	min;
  int	nb_mystere;
  int	redo;
  int	test;
  

  min = 1;
  redo = 1;
  
  while (redo == 1)
    {
      difficulte = difficulty();

      srand(time(NULL));
      nb_mystere = (rand() % (difficulte - min + 1) + min);

      game(nb_mystere);

      printf("Voulez vous refaire une partie ? 0 : Oui; 1 : Non\n");
      scanf("%d", &test);

      if (test == 1)
	{
	  redo = 0;
	}
      else if (test == 0)
	{
	  redo = 1;
	}
      else
	{
	  printf("Vous n'avez pas répondu à la question !\n\n");
	}
    }
  return 0;
}

