//-----------------------------------------------------------------------------------//
// Nom du projet 		: EMSY TP1 
// Nom du fichier 		: EMSY_TP1.c 
// Date de création 	: 11.11.24
// Date de modification : -
//
// Auteur 				: Henri Mott
//
// Version				: 0.1
//
// Description          : code qui peut calculer la surface géométrique de plusieurs objets
//
//
// Remarques : Peut-être lourdement amélioré           
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s
                    // Nouveauté du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf
//-- apple de librairies
#include <math.h> //
#include <corecrt_math_defines.h>

//-- programme principale --// 
void main()
{
  while (1)
	{
		//-- déclaration de variable --//
			//type nom_variable
			//type entier
		int shape, Hight_m, lenght_m, radius_m, pi_m = 3.14;

		//For the surface aria
		float surfacetriangle_m2, surfaceCarre_m2, circle_m2;
		enum e_choixSurface { Triangle, square = 1, circle }; // 0 1 2 get incremented by it's self
		//surfacetriangle_m2 = powf(longueur_m,2);

		// intruction 1
		// Formats what we get to a single chatacter
		int scanf(const char* format);

		//First question
		printf("Make a choise: Triangle(0), Square(1), or circle(2):\n ");

		//Wait for shape to come
		scanf("%d", &shape);
		//Feed-back on what shape chosen
		switch (shape)
		{
		case 0:
			printf("shape chosen = Triangle\n");
			break;

		case 1:
			printf("shape chosen = Square\n");
			break;

		case 2:
			printf("shape chosen = circle\n");
			break;

		default:
			break;
		}

		//-------------------------------------

		// triangle
		if (shape == 0)
		{
			//Second question
			printf("Hight ?\n ");
			//Wait for dimentions
			scanf("%d", &Hight_m);
			//Feed-back on what longeur chosen
			printf("Hight = %d\n", Hight_m);

			//-------------------------------------

			//Second question
			printf("lenght ?\n ");
			//Wait for dimentions
			scanf("%d", &lenght_m);
			//Feed-back on what largeur chosen
			printf("lenght = %d\n", lenght_m);

			//Result
			surfacetriangle_m2 = (lenght_m * Hight_m / 2);
			printf("surfacetriangle %f\n", surfacetriangle_m2);
			printf("Done :DD\n");

			//-------------------------------------
		}

		// square
		if (shape == 1)
		{
			//-------------------------------------

			//Second question
			printf("Hight ?\n ");
			//Wait for dimentions
			scanf("%d", &Hight_m);
			//Feed-back on what longeur chosen
			printf("Hight = %d\n", Hight_m);

			//-------------------------------------

			//Second question
			printf("largeur ?\n ");
			//Wait for dimentions
			scanf("%d", &lenght_m);
			//Feed-back on what largeur chosen
			printf("longeur = %d\n", lenght_m);

			//Result
			surfaceCarre_m2 = (lenght_m * Hight_m);
			printf("surfaceCarre %f\n", surfaceCarre_m2);
			printf("Done :P\n");

			//-------------------------------------
		}

		// circle
		if (shape == 2)
		{

			//Second question
			printf("radius ?\n ");
			//Wait for dimentions
			scanf("%d", &radius_m);
			//Feed-back on what radius chosen
			printf("radius %d\n", radius_m);

			//Result
			//	circle_m2 = MI_PI * (radius_m * radius_m);
			//	circle_m2 = MI_PI* powf (radius_m,2);


			circle_m2 = (radius_m * pi_m);
			printf("circle %f\n", circle_m2);
			printf("Done :0\n");

			//-------------------------------------
		}

	}
}
