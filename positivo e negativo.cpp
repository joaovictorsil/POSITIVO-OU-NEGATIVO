#include <stdlib.h>
#include <stdio.h>

void num (){
	int num;
	
	
	printf ("Positivo ou negativo ? digite o numero para lhe darmos a resposta.\n");
	printf("______________________________________________________________________\n\n");
	
	printf("\ndigite o valor :");
	scanf("%d",&num);
	
	if(num >=0){
		printf("numero positivo");
	}
	else{
		printf("numero negativo");
	}
}		

int main (){
	num();
}
