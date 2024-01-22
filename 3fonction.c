#include <stdio.h>
#include <stdlib.h>

int x, y, S;

int soustraction(){
	
	S = x-y;
	
	printf("l adition de %d et %d est %d : ", x, y, S);
}


int somme(){
	
	S = x+y;
	printf("la somme de %d et %d est %d : ", x, y, S);
	
	
}

int multiplication(){
	
	
	S = x*y;
	printf("la multiplication de %d et %d est %d : ", x, y, S);
	
}

int main() {
	
	int X;
	
	printf("entrer le premier nombre : ");
	scanf("%d", &x);
	printf("enter le dexieme nombre : ");
	scanf("%d", &y);
	printf("entrer la fonction que vous-souetez : la mutiplucation entrer 1, la somme entrer 2, la soustraction entrer 3 : ");
	scanf("%d", &X);
	
	
	switch(X){
		 case 1:
		 	
		  multiplication();
		  	
		 break;
		 
		 case 2:
		 somme();
		 break;
		 
		 case 3:
		 soustraction();
		 break;
		 
		default:
			printf("erreur");
	}
	
	return 0;
	
}
