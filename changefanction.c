#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void changeur(int a, int b){
	int c = a;
	a = b;
	b = c;
	
	printf("la valeur de a est : %d et la valeur de b est : %d", a, b);
	
}


int main() {
	int a, b;
	
	printf("entrer la valeur de a : ");
	scanf("%d", &a);
	printf("entrer la valeur de b : ");
	scanf("%d", &b);
	printf("lavaleur de a est : %d et la valeur de b est : %d \n", a, b);
	
	changeur(a,b);
	
	return 0;
}