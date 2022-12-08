#include<stdio.h>
void main(){
    int save_number, number, p = 1;
    int decimal = 0, i = 1, j, d;
    printf("\n\n  Convert Binary to Decimal:\n ");
    printf("-------------------------------------------------------\n");
    printf("Input a Binary number: ");
    scanf("%d",&number);
    save_number = number;
    for(j = number;j > 0; j = j/10){
        d = j % 10;
        if(i == 1){
            p = p*1;
        }else{
            p = p*2;
        }
        decimal = decimal + (d*p);
        i++;
    }
    printf("\nBinary Number: %d\nThe equivalent Decimal Number: %d \n\n", save_number, decimal);
}
