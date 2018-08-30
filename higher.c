#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void higher(int n,int ini[n],int fim[n]){
	int l=0,i=0,count=0;

	for(i=0;i<n;i++){
		int cont=0;
		for(l=0;l<n;l++){
			if(i!=l){
				if(ini[i]>ini[l]){
					count++;
				}
			}
		}
		fim[count] = ini[i];
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
	melhor[i-2] = i-1;
	melhor[i-2] = i-1;

	higher(n,melhor,result);

	for (i = 0;i < n;i++)
        printf("%d\t", result[i]);
        printf("\n");

	return 0;

}