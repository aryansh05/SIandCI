#include<stdio.h>

int main()
{   
    int P,R,T,N,Simple_Interest,Compound_Interest;
    printf("Type the amount of principal: \n");
    scanf("%d",&P);
    printf("Type the amount of rate: \n");
    scanf("%d",&R);
    printf("Type the amount of time: \n");
    scanf("%d",&T);
    printf("Number of times interest applied: \n");
    scanf("%d",&N);
    Simple_Interest = (P * R * T)/100;
    printf("\nThe simple interest is: %d\n",Simple_Interest);
    Compound_Interest = P*(1+(R/N))^(N*T);
    printf("The compund interest is: %d",Compound_Interest);
    
    
    return 0;
}