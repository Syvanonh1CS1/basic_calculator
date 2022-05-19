//
//  operator_functions.c
//  
//
//  Created by Syvanonh Boualaphanh on 19/5/22.
//

#include<stdio.h>

float a,b;
int input();
int main(){
    int sign;
    
    printf("\nPress 1 for addition, 2 for subtraction, 3 for multiplication, or 4 for division: \n");
    scanf("%d", &sign);
    
    if(sign==1){
        input();
        printf("\n%.2f + %.2f = %.2f\n",a,b,a+b);
    }else if(sign==2){
        input();
        printf("\n%.2f - %.2f = %.2f\n",a,b,a-b);
    }else if(sign==3){
        input();
        printf("\n%.2f x %.2f = %.2f\n",a,b,a*b);
    }else if(sign==4){
        input();
        printf("\n%.2f / %.2f = %.2f\n",a,b,a/b);
    }else{
        printf("\nInvalid input, please try again.\n");
        main();
    }
    
    return 0;
}

int input(){

    printf("\nFirst number:\n");
    scanf("%f", &a);
    printf("\nSecond number:\n");
    scanf("%f", &b);
    
    return 0;
}
