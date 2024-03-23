/*Write C code to determine if the sum of the digits of a 5-digit user input number is contained within the number itself. Print the result to the screen.*/
#include<stdio.h>
int main(){
    int num, sum;
    printf("Enter a 5-digit number: ");
    scanf("%d",&num);
    sum =  num %10 + (num/10)%10 + (num/100)%10 + (num/1000)%10 + num/10000;
   
    printf("Sum of digits: %d \n", sum);
    
    if(num%100 == sum){
        printf("%d is present in the sum of its digits.",sum);
    }
    else if((num/10)%100 == sum){
        printf("%d is present in the sum of its digits.",sum);
    }
    else if((num/100)%100 == sum){
        printf("%d is present in the sum of its digits.",sum);
    }
    else if((num%1000)/10 == sum){
        printf("%d is present in the sum of its digits.",sum);
    }
    else{
        printf("%d is not present in the sum of its digits.",sum);
    }
    return 0;
}
