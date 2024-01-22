#include <stdio.h>
#include <stdlib.h>

int main(){
	int age_enf;
	
	printf("veillez entrer l'age de votre enfant : ");
	scanf("%d", &age_enf);
	
	if(age_enf >=6 && age_enf<= 7){
		printf("poussin");
	}
	else if(age_enf >= 8 && age_enf <= 9){
		printf("pupille");
	}
	else if(age_enf >= 10 && age_enf <= 11){
		printf("minime");
	}
	else {
		printf("cadet");
	}

return 0;
}
