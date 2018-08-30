#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void higher(int n,int ini[n],int fim[n]){
	int i=0,l=0;
	for (i = 0; i <n; i++){
		int cont=0;
		for (l = 1	; l <n; l++){
			if(i!=l ){
				if (ini[i]>ini[l]){
					cont++;
				}
			}
		}
		fim[cont] = ini[i];
	}
}

int main(){
	
	double tempoInicial,tempoFinal,tempoGasto;
	int n = 100000, result[n], i=0;
	int melhor[n],aleatorio[n],pior[n];
	//melhor
	for (i=0;i<n;i++){
		melhor[i] = n-i-1;
		result[i] = '\n';
	}

	//pior
	for (i=0;i<n;i++){
		pior[i] = n-i-1;
	}

	//aleatorio
	for(i=0;i<n;i++){
		aleatorio[i]=rand()%10000;
	}

	//melhor
	tempoInicial = clock();
	higher(n,aleatorio,result);
	tempoFinal = clock();	tempoGasto = (tempoFinal-tempoInicial)/CLOCKS_PER_SEC;
	printf("%f\n",tempoGasto);
	
	for (i = 0;i < n;i++)
    //    printf("%d\t", melhor[i]);
    
    //pior
	tempoInicial = clock();
	higher(n,pior,result);
	tempoFinal = clock();	tempoGasto = (tempoFinal-tempoInicial)/CLOCKS_PER_SEC;

	printf("%f\n",tempoGasto);

	for (i = 0;i < n;i++)
    //    printf("%d\t", pior[i]);
    //aleatorio
    tempoInicial = clock();	
	higher(n,aleatorio,result);
	tempoFinal = clock();	tempoGasto = (tempoFinal-tempoInicial)/CLOCKS_PER_SEC;
	printf("%f\n",tempoGasto);

	for (i = 0;i < n;i++){
	//    printf("%d\t", aleatorio[i]);
	}	
	printf("\n");
}