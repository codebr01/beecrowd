#include <stdio.h>
int main(){
    int x,i;
    scanf("%i", &x);  
    i = 0;
    while(i < 6){
        if(x % 2 != 0){
            printf("%i\n", x);
            i++;
        }
        x++;
    }
    return 0;
}