#include <stdio.h>
#include <stdlib.h>

float module (float a, float b){
	return(int)a % (int)b;
}

float addition (float a, float b){
	return a + b;
}

float subtraction (float a, float b){
	return a - b;
}

float multiplication (float a, float b){
	return a * b;
}

float division (float a, float b){
	return a / b;
}

int main (int argc, char** argv){
	char symb = (char)*argv[1];
	float a = atof(argv[2]);
	float b = atof(argv[3]);

	switch (symb){
		case '+':
			printf("%.2f\n", addition (a, b));
		break;

		case '-':
			printf("%.2f\n", subtraction (a, b));
		break;

		case 'x':
			printf("%.2f\n", multiplication (a, b));
		break;

		case '/';
			printf("%.2f\n", division (a, b));
		break;

		case  '%':
			printf("% MOD %d = %.2f\n", (int)a, (int)b, module(a, b));
	}
}
