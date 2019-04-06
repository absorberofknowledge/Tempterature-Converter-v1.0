// tempconverter.c
// Code by Luke Harrison
// The HarriSoft Corporation

/* A  relatively simple program with a menu that allows a user to select a temperature scale
   and convert an amount from that scale to another temperature scale. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f_to_c(void);
void f_to_k(void);
void c_to_f(void);
void c_to_k(void);
void k_to_f(void);
void k_to_c(void);

int main(void) {

	int running = 1;
	int choice1, choice2;


	while (running) {

		puts("Temperature Converter v1.0");
		puts("Code by Luke Harrison");
		puts("The HarriSoft Corporation");

		printf("\nEnter -1 at any time to terminate program.\n");

		printf("\nPlease select what temperature scale you would like to convert.\n");
		printf("1) Fahrenheit\n");
		printf("2) Celsius\n");
		printf("3) Kelvin\n\n");

		printf("Choice: ");
		scanf("%i", &choice1);

		switch (choice1) {

		default: puts("That wasnt 1, 2, or 3!"); break;
		case 1: puts("What temperature scale do you want to convert to?");
			printf("1) Celsius\n");
			printf("2) Kelvin\n");
			printf("\nChoice: ");
			scanf("%i", &choice2);
			switch (choice2) {
			default: puts("That wasn't 1 or 2!");
			case 1: f_to_c(); break;
			case 2: f_to_k(); break;
			case -1: running = 0; printf("\nProgram Terminated. Bye-Bye!\n"); break;
			} break;

		case 2: puts("What temperature scale do you want to convert to?");
			printf("1) Fahrenheit\n");
			printf("2) Kelvin\n");
			printf("\nChoice: ");
			scanf("%i", &choice2);
			switch (choice2) {
			default: puts("That wasn't 1 or 2!");
			case 1: c_to_f(); break;
			case 2: c_to_k(); break;
			case -1: running = 0; printf("\nProgram Terminated. Bye-Bye!\n"); break;
			} break;
		case 3: puts("What temperature scale do you want to convert to?");
			printf("1) Fahrenheit\n");
			printf("2) Celsius\n");
			printf("\nChoice: ");
			scanf("%i", &choice2);
			switch (choice2) {
			default: puts("That wasn't 1 or 2!");
			case 1: k_to_f(); break;
			case 2: k_to_c(); break;
			case -1: running = 0; printf("\nProgram Terminated. Bye-Bye!\n"); break;
			} break;
		case -1: running = 0; printf("Program Terminated. Bye-Bye!\n"); break;
		}
	}
	return 0;
}



void f_to_c(void) {

	double tempF;
	double tempC;

	printf("Enter Fahrenheit Temperature: ");
	scanf("%lf", &tempF);

	tempC = (((tempF - 32) * 5) / 9);

	printf("\n%.2lf degrees Fahrenheit converts to %.2lf degrees Celsius\n\n", tempF, tempC);

}
void f_to_k(void) {
	
	double tempF;
	double tempK;

	printf("Enter Fahrenheit Temperature: ");
	scanf("%lf", &tempF);

	tempK = (tempF + 459.67) * (5.0 / 9);

	printf("\n%.2lf degrees Fahrenheit converts to %.2lf degrees Kelvin\n\n", tempF, tempK);

}
void c_to_f(void) {

	double tempC;
	double tempF;

	printf("Enter Celsius Temperature: ");
	scanf("%lf", &tempC);

	tempF = ((tempC * 1.8) + 32);

	printf("\n%.2lf degrees Celsius converts to %.2lf degrees Fahrenheit\n\n", tempC, tempF);

}
void c_to_k(void) {

	double tempC;
	double tempK;

	printf("Enter Celsius Temperature: ");
	scanf("%lf", &tempC);

	tempK = (tempC + 273.15);

	printf("\n%.2lf degrees Celsius converts to %.2lf degrees Kelvin\n\n", tempC, tempK);

}
void k_to_f(void) {

	double tempF;
	double tempK;

	printf("Enter Kelvin Temperature: ");
	scanf("%lf", &tempK);

	tempF = ((tempK * 1.8) - 459.67);

	printf("\n%.2lf degrees Kelvin converts to %.2lf degrees Fahrenheit\n\n", tempK, tempF);

}
void k_to_c(void) {

	double tempC;
	double tempK;

	printf("Enter Kelvin Temperature: ");
	scanf("%lf", &tempK);

	tempC = (tempK - 273.15);

	printf("\n%.2lf degrees Kelvin converts to %.2lf degrees Celsius\n\n", tempK, tempC);

}