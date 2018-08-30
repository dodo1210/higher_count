#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void higher(int n,int ini[n],int fim[n]);

int main(){
	
	int n = 10;
	int result[n], i=0;
	int melhor[n],fim[n];
	double tempoInicial,tempoFinal,tempoGasto;

	for (i=0;i<n;i++){
		melhor[i] = n-i-1;
		result[i] = '\n';
	}

	//aleatorio
	//for(i=0;i<n;i++){
	//	melhor[i]=rand()%n;
	//	result[i] = '\n';
	//}

	tempoInicial = clock();
	int l=0,count=0;

	for(i=0;i<n;i++){
		for(l=0;l<n;l++){
			if (melhor[i]>melhor[l]){
				count++;
			}
		}
		result[count] = melhor[i];
		count=0;
	}
	tempoFinal = clock();	
	tempoGasto = (tempoFinal-tempoInicial)/CLOCKS_PER_SEC;
	

	for (i = 0; i < n; ++i){
		printf("%d\n",result[i] );
	}


}