#include <stdio.h>
#include <stdbool.h>

int valide(int x){
	while(x<=1){
       printf("entrer un nombre valide :");
       scanf("%d",&x);
    
}
       
	
}

bool ispremier(){
	
	int c, x, i;
	for(i=2 ; i<=x; i++){
	if(valide(x)%i == 0);
	c++;
	}
	if(c==2){
		return true;
		
	}
	else{
		
		return false;
	}
}

int main() {
	int x;
	
	printf("entrer un nombre entier : ");
	scanf("%d", &x);
	
	if(x<=1)
		
		valide(x);
	
	else if(ispremier(x)){
	
		printf("le nembre %d est premier.", x);
	}
	
	else{
		
		printf("le nembre %d est non premier.", x);
	}
	
	return 0;
}