#include <stdio.h>

int main(){
    int n, i, j, aux, ar[] = {9, 7, 5, 2, 1, 0, 3, 8, 6, 4};

    n = 10;

    for(i=1; i < n; i++){
        aux = ar[i];
        for(j=i; (j > 0) && (aux < ar[j-1]); j--){
		ar[j] = ar[j-1];
        }
	ar[j] = aux;
    }

    printf("ar[] = {");
    for(n=0; n < 10; n++){
        printf("%d ", ar[n]);
    }
    printf("}\n");

return 0;
}
