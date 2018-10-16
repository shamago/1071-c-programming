#include <stdio.h>

int main(){
    int h1, h2;
    float kg1,kg2;

    while(h1>0 && h2>0){

        printf("Enter height(-1 to exit): ");
        scanf("%d %d",&h1, &h2);

        if(h1>0 && h2>0){
           for(int i=h1; i<=h2; i++){
            kg1=18.5*(i/100.)*(i/100.);
            kg2=24*(i/100.)*(i/100.);

            printf("%d cm: %.1f ~ %.1f\n",i,kg1,kg2);
            }
        }else{
            printf("Bye! Coding by 406530732");
        }

    }
    return 0;

}
