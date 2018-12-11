
#include <stdio.h>

int main(){
    int n, iExter, iInter, menor, aux, ar[] = {9, 7, 5, 2, 1, 0, 3, 8, 6, 4};

    n = 10;
    iExter = 0;
    menor = ar[0];

    for(iExter; iExter < n; iExter++){
        for(iInter=iExter+1; iInter < n; iInter++){
            if(ar[iInter] < menor){
                    menor = ar[iInter];
                    aux = iInter;
            }
        }
        ar[aux] = ar[iExter];
        ar[iExter] = menor;
        menor = ar[iExter+1];
    }

    printf("ar[] = {");
    for(n=0; n < 10; n++){
        printf("%d ", ar[n]);
    }
    printf("}\n");

return 0;
}
