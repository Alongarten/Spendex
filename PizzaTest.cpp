#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int slices, totalpeople, notopping, withtopping;
	float totalsum;
	char person1[10];
	char person2[10];
	char person3[10];
	char person4[10];
	char person5[10];
	char person6[10];
	int p1slices, p2slices, p3slices, p4slices, p5slices, p6slices;
	p1slices = p2slices = p3slices = p4slices = p5slices = p6slices = 0;
	char drink;
	float priceperslice = 3.125;
	float PPTS = 0;  // price per topped slice?
	char diverse;

	// names and numbers of people 

	printf("how many people ate?\n");
	scanf("%d", &totalpeople);
	if (totalpeople == 3) {
		printf("First person's name: \n");
		scanf("%s", person1);
		printf("Second person's name: \n");
		scanf("%s", person2);
		printf("Third person's name: \n");
		scanf("%s", person3);
	}
	else if (totalpeople == 4) {
		printf("First person's name: \n");
		scanf("%s", person1);
		printf("Second person's name: \n");
		scanf("%s", person2);
		printf("Third person's name: \n");
		scanf("%s", person3);
		printf("Fourth person's name: \n");
		scanf("%s", person4);
	}
	else if (totalpeople == 5) {
		printf("First person's name: \n");
		scanf("%s", person1);
		printf("Second person's name: \n");
		scanf("%s", person2);
		printf("Third person's name: \n");
		scanf("%s", person3);
		printf("Fourth person's name: \n");
		scanf("%s", person4);
		printf("Fifth person's name: \n");
		scanf("%s", person5);
	} 
	else if (totalpeople == 6) {
		printf("First person's name: \n");
		scanf("%s", person1);
		printf("Second person's name: \n");
		scanf("%s", person2);
		printf("Third person's name: \n");
		scanf("%s", person3);
		printf("Fourth person's name: \n");
		scanf("%s", person4);
		printf("Fifth person's name: \n");
		scanf("%s", person5);
		printf("Sixth person's name: \n");
		scanf("%s", person6);
	}
	else { printf("ERROR ERROR ERROR ERROR ERROR ERROR!!!!!!!!!!!!!!!!!!\n"); 
	exit(0);
	}

	// slices

	printf("how many slices did %s eat?\n", person1);
	scanf("%d", &p1slices);
	printf("how many slices did %s eat?\n", person2);
	scanf("%d", &p2slices);
	printf("how many slices did %s eat?\n", person3);
	scanf("%d", &p3slices);

	if (totalpeople == 4) {
		printf("how many slices did %s eat?\n", person4);
		scanf("%d", &p4slices);
	}
	else if (totalpeople == 5) {
		printf("how many slices did %s eat?\n", person4);
		scanf("%d", &p4slices);
		printf("how many slices did %s eat?\n", person5);
		scanf("%d", &p5slices);
	}
	else if (totalpeople == 6) {
		printf("how many slices did %s eat?\n", person4);
		scanf("%d", &p4slices);
		printf("how many slices did %s eat?\n", person5);
		scanf("%d", &p5slices);
		printf("how many slices did %s eat?\n", person6);
		scanf("%d", &p6slices);
	}
	
	if (totalpeople == 3) {
		slices = p1slices + p2slices + p3slices;
	}
	else if (totalpeople == 4) {
		slices = p1slices + p2slices + p3slices + p4slices;
	}
	else if (totalpeople == 5) {
		slices = p1slices + p2slices + p3slices + p4slices + p5slices;
	}
	else if (totalpeople == 6) {
		slices = p1slices + p2slices + p3slices + p4slices + p5slices + p6slices;
	}
	
	// toppings
	int emptyslices = 0;
	int losersnum = 0;
	char whoate[10];

	// PPTS price per topped slice
	if (slices == 24) {
		PPTS = 14/(float)slices;
	}
	else if (slices == 32) {
		PPTS = 14/(float)slices;
	}
	else if (slices == 40) {
		PPTS = 21/(float)slices;
	}
	else if (slices == 48) {
		PPTS = 21/(float)slices;
	}
	else if (slices == 56) {
		PPTS = 28/(float)slices;
	}
	float p1price = (PPTS * (float)p1slices) + ((float)p1slices * priceperslice);
	float p2price = (PPTS * (float)p2slices) + ((float)p2slices * priceperslice);
	float p3price = (PPTS * (float)p3slices) + ((float)p3slices * priceperslice);
	float p4price = (PPTS * (float)p4slices) + ((float)p4slices * priceperslice);
	float p5price = (PPTS * (float)p5slices) + ((float)p5slices * priceperslice);
	float p6price = (PPTS * (float)p6slices) + ((float)p6slices * priceperslice);

	printf("any pizzas without bulgarit? y/n \n");  // OR: how many without? -> 8 * (0) etc.
	scanf(" %c", &diverse);
	if (diverse == 'y') {
		printf("how many pizzas (whole) WITHOUT bulgarit?\n");
		scanf("%d", &notopping);
		emptyslices = 8 * notopping;
		printf("how many people ate without bulgarit?\n");
		scanf("%d", &losersnum);
		
		
		while (losersnum > 0 ) {
			printf("who ate without bulgarit?\n");
			scanf("%s", whoate);
			if (strcmp(whoate, person1) == 0) {
				p1price -= PPTS * (float)p1slices;
			}
			else if (strcmp(whoate, person2) == 0) {
				p2price -= PPTS * (float)p2slices;
			}
			else if (strcmp(whoate, person3) == 0) {
				p3price -= PPTS * (float)p3slices;
			}
			else if (strcmp(whoate, person4) == 0) {
				p4price -= PPTS * (float)p4slices;
			}
			else if (strcmp(whoate, person5) == 0) {
				p5price -= PPTS * (float)p5slices;
			}
			else if (strcmp(whoate, person6) == 0) {
				p6price -= PPTS * (float)p6slices;
			}
			losersnum--;

			}

		}
	
	printf("price of topping per slice = %f \n", PPTS);

	totalsum = (PPTS * slices) + (slices * priceperslice);

	printf("did you also get coke? y/n \n");
	scanf(" %c", &drink);
	if (drink == 'y') {
		totalsum += 14;
		p1price += 14 / totalpeople;
		p2price += 14 / totalpeople;
		p3price += 14 / totalpeople;
		p4price += 14 / totalpeople;
		p5price += 14 / totalpeople;
		p6price += 14 / totalpeople;
	}
	
	printf("total price: %lf\n", totalsum);
	printf("%s owes %f\n", person1, p1price);
	printf("%s owes %f\n", person2, p2price); 
	printf("%s owes %f\n", person3, p3price);
	
	if (totalpeople == 4) {
		printf("%s owes %f\n", person4, p4price);
	}
	else if (totalpeople == 5) {
		printf("%s owes %f\n", person4, p4price);
		printf("%s owes %f\n", person5, p5price);
	}
	else if (totalpeople == 6) {
		printf("%s owes %f\n", person4, p4price);
		printf("%s owes %f\n", person5, p5price);
		printf("%s owes %f\n", person6, p6price);
	}
		system("pause");
	
	return 0;
}

