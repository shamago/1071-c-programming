#include <stdio.h>
#include <math.h>
#include <ctype.h>

int checkSqrt(int N){
    for(int m=2;m<N;m++){
        if(N==m*m)
            return m;
    }
    return 0;
}

int main(){

    int N,m;
    char cont='Y';

    while(cont=='Y'){
        printf("Enter N: ");
        scanf("%d",&N);

        if(m=checkSqrt(N)){
            printf("Yes. %d = %d * %d\n",N,m,m);
        }else
            printf("No.\n");

        printf("Continue (Y/N)? ");
        getchar();
        cont = toupper(getchar());
        printf("\n");
    }
    printf("Coding by 406530732");
    return 0;
}
