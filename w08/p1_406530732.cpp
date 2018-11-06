#include <stdio.h>
#include <ctype.h>

int prime(int N){
    for(int i=2;i<N/2;i++){
        if(N%i==0)
            return 1;
        else
            return 0;
    }
}

int main(){

    int N;
    char cont='Y';

    while(cont=='Y'){
            printf("Enter N: ");
            scanf("%d",&N);

            if(prime(N)){
                printf("%d is a prime.\n",N);
            }else
                printf("%d is not a prime.\n",N);

            printf("Continue (Y/N)? ");
            getchar();
            cont = toupper(getchar());
            printf("\n");
    }
    printf("Coding by 406530732");
    return 0;
}
