
#include <stdio.h>
#include <math.h> 

#define PI 3.1415592 

void calcular_volume_cilindro(float altura, float raio, float *Res){ // AQUI É FEITA A PASSAGEM DA REFERENCIA DA VARIÁVEL RESULTADO (REPEARE QUE É UM PONTEIRO, E A FUNÇÃO É DO TIPO VOID)
    *Res = PI * pow(raio,2) * altura; // Como estamos escrevendo no endereço de memoria, devemos acessar com o operador *
   // O Retorno do  volume É FEITO PELO ENDEREÇO DE MEMORIA DA VARIAVEL RESULTADO
}

int main(){
    float Altura, Raio, Resultado; //Declarado a altura, raio e o resultado (variaveis locais)
    
    printf("Digite a altura de um cilindro circular: "); //Imprimi para o usuario digitar a altura
    scanf("%f", &Altura); //Faz a leitura da altura
    
    printf("Digite o raio de um cilindro circular: "); //Imprimi para o usuario digitar o raio
    scanf("%f", &Raio); //Faz a leitura do raio
    
    calcular_volume_cilindro(Altura,Raio, &Resultado); //Chamar a função calcular_volume_cilindro e seus respectivos dados de entrada, a variável RESULTADO É PASSADA POR REFERENCIA
    printf("O volume é: %.7f", Resultado); //Imprimi o valor do volume com até 7 casas decimais 
    
    
    return 0;
    
}






