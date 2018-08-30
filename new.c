#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void higher(int n,int ini[n],int fim[n]){
	int i=0,l=0;
	for (i = 0; i <n; i++){
		int cont=0;
		for (l = 0; l <n; l++){
			if(i!=l && ini[i]>ini[l])
				cont++;
		}
		fim[cont] = ini[i];
	}
}

int main(){
	
	int n = 10, result[n], i=0;
	int melhor[n];
	//melhor
	for (i=0;i<10;i++){
		melhor[i] = i;
		result[i] = '\n';
	}

	higher(n,melhor,result);

	for (i = 0;i < n;i++)
        printf("%d\t", melhor[i]);
        printf("\n");

	return 0;

}