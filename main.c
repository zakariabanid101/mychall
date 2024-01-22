#include <stdio.h>
#include <stdlib.h>

int fact(int x){
	int y = 0;
	if(x==y)
		return 1;
	if(x<0)
	
	return 0;
	
	else
	return x*fact(x-1);
	
	
}

int main() {
	
	int x;
	
	printf("entrer un nombre positive : ");
	scanf("%d", &x);
	if(fact(x)==0)
	printf("invalid");
	else
	printf("le factoriel de %d est : %d",x , fact(x));
	
	
	return 0;
}