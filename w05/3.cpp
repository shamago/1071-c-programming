#include <stdio.h>

void prchar(char C, int n){
    for(int i=1;i<=n;i++)
    printf("%c",C);
}

int main(){
    int height;

    while(height>0){

        printf("Enter height (-1 to exit): ");
        scanf("%d",&height);

        if(height>0){
            for(int i=1;i<=height;i++){
                prchar(' ',height-i);
                prchar('*',i);
                prchar(' ',2);
                prchar('*',i);
                printf("\n");
            }
        }
        else{
            printf("Bye! coding by 406530732");
        }
    }
    return 0;

}
