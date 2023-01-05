#include <stdio.h>
#include <stdlib.h>
#include <time.h>
      /*MinMax1*/
int main()
{
    int i, n=10000000;
    int *vetor;
    vetor = malloc (n*sizeof (int));
    if(vetor==NULL)
        exit(0);
    
    int max=0;
    int min=0;
    
    srand(time(NULL));
    clock_t t;
    
    for(i = 0; i < n; i++) //Preenchendo o vetor com números aleatórios ou sequenciais
     vetor[i] =i;//rand()%100;
    
    /*for(i = 0; i < n; i++)
     printf("%d ",vetor[i]);*/
    
    srand(time(NULL));
    t = clock();//começo da marcação de tempo
    
    // MinMAx1 de fato
    
    max=vetor[0];
    min=vetor[0];
    
    for (i=1; i<n; i++){
     if(vetor[i]>max)
        max= vetor[i];
     if(vetor[i]<min)
        min= vetor[i];
    }
    
    
    t = clock() - t; //Tempo final-tempo inicial.
    printf("\nO maior é : %d\n", max);
    printf("O menor é : %d\n", min);
    printf("\nO Tempo de execução : %.4lf ms",((double) t)/((CLOCKS_PER_SEC/1000)));//conversão do tempo em milisegundos

    
    free(vetor);
    return 0;
}







