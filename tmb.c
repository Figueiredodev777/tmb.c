 int main(){
 	
    float peso, altura, idade;
    float resultado;
 	
 	printf("Digite uma idade:\n");
 	scanf("%f", &idade);
 	
	printf("Digite seu peso e kilo:\n");
 	scanf("%2f", &peso);
 	
 	printf("Digite sua altura em centimetros:\n");
 	scanf("%f", &altura);
 	
 	printf("Idade informada: %f.\n", idade);
 	printf("Peso informado: %2f.\n", peso);
 	printf("Altura informado: %f.\n", altura);
 		
 	
 	
 	resultado = 66.5 + (13.75 * peso) + (5 * altura) - (6.75 * idade);
 	
 	printf("Sua taxa metabolica basal: %.2f calorias/dia\n", resultado);
 	
//vou mudar a variavel, para q a formula mude de acordo com o sexo// 

return 0;
 } 
