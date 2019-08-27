#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float  w = get_float("weight: ");
    printf("enter value for weight%f\n", w);

    float h = get_float("h:");
    printf("enter value height%f\n", h);

    float bmi = w/(h*h);
    //printf("your bmi is:%f",bmi);

    if(bmi<18.5){
        printf("underweight%f\n", bmi);

    }
    else if(bmi ==18.5 || bmi<25 ){
        printf("normal, maintain this weight %f\n",bmi);
    }

    else if(bmi >=25 || bmi<30 ){
        printf("overweight, please keep fit %f\n",bmi);

    }

    else{
        printf(" obese, please exercise immediately %f\n", bmi);
    }
}
