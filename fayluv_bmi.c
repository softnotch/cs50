#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float  w = get_float("w: ");
    printf("enter weight%f\n", w);

    float h = get_float("h:");
    printf("enter height%f\n", h);

    float bmi = w/(h*h);
    //printf("your bmi is:%f",bmi);

    if(bmi<18.5){
        printf("underweight%f\n", bmi);

    }
    else if(bmi ==18.5 || bmi<25 ){
        printf("normal%f\n",bmi);
    }

    else if(bmi >=25 || bmi<30 ){
        printf("overweight%f\n",bmi);

    }

    else{
        printf("obese %f\n", bmi);
    }
}
