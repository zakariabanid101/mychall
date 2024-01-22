#include <stdio.h>
#include <stdlib.h>


int factoriel_f(int x){
	int i, f = 1;
	for(i=1 ; i<=x ; i++){
	f= f*i;
	}
	printf("le factoriel de %d est %d : ", x, f);
}

int main() {
	
	int x;
	
	printf("entrer un nombre entier : ");
	scanf("%d", &x);
	
	factoriel_f(x);
	
	return 0;
}
