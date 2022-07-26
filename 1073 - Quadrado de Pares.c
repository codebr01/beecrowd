#include <stdio.h>
int main(){
    int num,i,num2;
    scanf("%i", &num);
    if((num < 2000) && (num > 5)){
        for(i = 2; i <= num; i += 2){
            printf("%i^2 = %i\n", i, (i * i));
        }
    }
    return 0;
}
