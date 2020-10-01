#include <stdio.h>

void selection_sort(int v[], int n){

	int menor;

	for(int i = 0; i<=n-2; i++){

		menor = i;

		for(int j = i+1; j <= n-1; j++){

			if(v[menor] > v[j]){

				menor = j;
			}

	    } 
	    int troca = v[i];
	    v[i] = v[menor];
	    v[menor] = troca; 
}

}

int main()
{

	int n = 10;
	int vetor[10] = {13,7,5,1,9,4,7,6,3,10};
	
    selection_sort(vetor, n);
	
    for(int i = 0;i < n; i++){
		printf("%d  ",vetor[i]);
	}
	printf("\n");

	
	return 0;
}
