#include <stdio.h>
#include <math.h>

int main(){
    int x,y;
    printf("Enter two integers: ");
    scanf("%d %d",&x ,&y);
    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d * %d = %d\n",x,y,x*y);
    printf("%d / %d = %d\n",x,y,x/y);
    printf("%d %c %d = %d",x,'%',y,x%y);

    return 0;
}
