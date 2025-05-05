#include <stdio.h>
 int main(){
 	
    float peso, altura, idade;
    float resultado;
 	int escolha;
 	
 	printf("Digite uma idade:\n");
 	scanf("%f", &idade);
 	
	printf("Digite seu peso em kilo:\n");
 	scanf("%f", &peso);
 	
 	printf("Digite sua altura em centimetros:\n");
 	scanf("%f", &altura);
 	
 	printf("Idade informada: %f.\n", idade);
 	printf("Peso informado: %f.\n", peso);
 	printf("Altura informado: %f.\n", altura);
 		
 	printf("Escolha o sexo:\n");
        printf("1 - Homem\n");
        printf("2 - Mulher\n");
        printf("digite o numero:");
        scanf("%d", &escolha);
 	
 	
 	if (escolha == 1) {
        
       resultado = 66.5 + (13.75 * peso) + (5 * altura) - (6.75 * idade);
        printf("sua taxa metabolica basal e: %.2f calorias/dia.\n", resultado);
    } else if (escolha == 2) {
        
        resultado = 655 + (9.56 * peso) + (1.85 * altura) - (4.68 * idade);
        printf("sua taxa metabolica basal e: %.2f calorias/dia.\n", resultado);
    } 
        
        
    
 	
return 0;
 } 
