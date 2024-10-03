#include <stdio.h>

int main(void){
     int v[6], i;
     for (i = 0; i <6; i++){
          printf("Digeite sua idade: ");
          scanf("%d", &v[i]);//ele vai ler a idade 
     }
     for (i = 0; i <6; i++){
          printf("%d, ",v[i]);
     }
}