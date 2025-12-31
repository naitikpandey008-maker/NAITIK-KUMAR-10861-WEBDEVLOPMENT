#include <stdio.h>

int main() {
    for(int i=1;i<3;i++){
        for(int n=i;n<=5;n--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}